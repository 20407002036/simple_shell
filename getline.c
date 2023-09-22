#include "shell.h"

/**
 * run_exit_or_external_command - getline
 * @user_input: pointer to the input
 * @envp: pointer to an array of chars
 * Return: void
 */
void run_exit_or_external_command(char *user_input, char *envp[])
{
	char *argvPP[100];
	int status;

	tokenize(user_input, argvPP);

	if (custom_strcmp(argvPP[0], "exit") == 0)
	{
		status = (argvPP[1] != NULL) ? custom_atoi(argvPP[1]) : 0;
		run_exit(status);
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
/**
 * run_builtin_command - runs anly the built in commands
 * @user_input: pointer to the user inputs
 * Return: void
 */
void run_builtin_command(char *user_input)
{
	char *argvPP[100];
	char *argv[2];

	tokenize(user_input, argvPP);
	if (custom_strcmp(argvPP[0], "env") == 0)
		run_env();

	else if (custom_strcmp(argvPP[0], "ls") == 0)
	{
		argv[2] = {"/bin/ls", NULL};
		execute_command(argv[0], argv, NULL);
	}
	else if (custom_strcmp(argvPP[0], "setenv") == 0)
	{
		if (argvPP[1] != NULL && argvPP[2] != NULL)
		{
			if (setenv(argvPP[1], argvPP[2], 1) != 0)
			{
				_eputs("Failed to set Environment variable:\n");
			}
			else
			{
				_eputs("Set VARIABLE:\n");
			}
		}
	}
	else if (custom_strcmp(argvPP[0], "unsetenv") == 0)
	{
		if (argvPP[1] != NULL)
		{
			if (unsetenv(argvPP[1]) != 0)
			{
				_eputs("Failed to unset environment variable.\n");
			}
			else
			{
				_eputs("Unset Environment variable:\n");
			}
		}
	}
}
/**
 * process_command - proccesses the command given by the user
 * @user_input: pointer to the input string
 * @envp: array holding the input string
 * Return: void
 */
void process_command(char *user_input, char *envp[])
{
	if (custom_strcmp(user_input, "exit") == 0 || is_command_exist(user_input))
	{
		run_exit_or_external_command(user_input, envp);
	}
	else
	{
		run_builtin_command(user_input);
	}
}
