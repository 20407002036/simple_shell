#include  "shell.h"

/**
 * run_exit_command - runs/execute command and arguments
 * @arg: pointer to the args
 * Return: void
 */

void run_exit_command(char *arg)
{
	int status;

	status = (arg != NULL) ? custom_atoi(arg) : 0;
	run_exit(status);
}

/**
 * run_ls_command - runs the ls from bin
 * @envp: pointer to the array envp
 * Return: void
 */
void run_ls_command(char *envp[])
{
	char *argvPP[100];

	argvPP[0] = "/bin/ls";
	tokenize("/bin/ls", argvPP);
	execute_command(argvPP[0], argvPP, envp);
}
/**
 * run_setenv_command - looks at the environment variables
 * @args: pointer to an array of arguements
 * Return: void
 */
void run_setenv_command(char *args[])
{
	if (args[1] != NULL && args[2] != NULL)
	{
		if (setenv(args[1], args[2], 1) != 0)
		{
			_eputs("Failed to set Environment variable:\n");
		} else
		{
			_eputs("Set VARIABLE:\n");
		}
	}
}
/**
 * run_unsetenv_command - runs the command
 * @arg: pointer to the chracters
 * Return: void
 */
void run_unsetenv_command(char *arg)
{
	if (arg != NULL)
	{
		if (unsetenv(arg) != 0)
		{
			_eputs("Failed to unset environment variable.\n");
		} else
		{
			_eputs("Unset Environment variable:\n");
		}
	}
}
/**
 * process_command - proccess the command given
 * @user_input: pointer to the characters
 * @envp: pointer to the char array
 * Return: void
 */

void process_command(char *user_input, char *envp[])
{
	char *argvPP[100];

	tokenize(user_input, argvPP);

	if (custom_strcmp(argvPP[0], "exit") == 0)
	{
		run_exit_command(argvPP[1]);
	}
	else if (custom_strcmp(argvPP[0], "env") == 0)
	{
		run_env();
	}
	else if (custom_strcmp(argvPP[0], "ls") == 0)
	{
		run_ls_command(envp);
	}
	else if (custom_strcmp(argvPP[0], "setenv") == 0)
	{
		run_setenv_command(argvPP);
	}
	else if (custom_strcmp(argvPP[0], "unsetenv") == 0)
	{
		run_unsetenv_command(argvPP[1]);
	}
	else
	{
		if (!is_command_exist(argvPP[0]))
		{
			_eputs("Command does not exist in the PATH.\n");
		}
		else
		{
			execute_command(argvPP[0], argvPP, envp);
		}
	}
}
