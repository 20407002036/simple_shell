#include  "shell.h"

/**
* process_command - runs/execute command and arguments
* @user_input: write from command line
*/

void process_command(char *user_input)
{
    char *argvPP[100];

    tokenize(user_input, argvPP);
    printf("Input command: %s\n", user_input);

    if (strcmp(argvPP[0], "exit") == 0) 
        run_exit();
    else if (strcmp(argvPP[0], "env") == 0) 
        run_env();
    else
    {
        if (is_command_exist(argvPP[0])) 
            execute_command(argvPP[0], argvPP);
        else 
            printf("Command '%s' does not exist in the PATH.\n", argvPP[0]);
    }

    free_args(argvPP);
}