#include  "shell.h"

/**
* process_command - runs/execute command and arguments
* @user_input: write from command line
*/

void process_command(char *user_input, char *envp[]) {
    char *argvPP[100];
    int status = 98, status2;
    char *ls_command = "/bin/ls";

    tokenize(user_input, argvPP);
    _eputs("Input command: ");
    _eputs(user_input);
    _eputs("\n");

    if (custom_strcmp(argvPP[0], "exit") == 0) {
        if (argvPP[1] != NULL){
            status2 = custom_atoi(argvPP[1]);
            if (status == status2)
                run_exit(status);
        }
        else
            run_exit(0);
    } else if (custom_strcmp(argvPP[0], "env") == 0) {
        run_env();
    }else if (custom_strcmp(argvPP[0], "ls") == 0){
        argvPP[0]=ls_command;
        execute_command(ls_command, argvPP, envp);
    }else if (custom_strcmp(argvPP[0], "setenv") == 0){
        if (argvPP[1] != NULL && argvPP[2] != NULL){
            if (setenv(argvPP[1], argvPP[2], 1 != 0))
                _eputs("Failed to set Enviroment variable:");
            else 
                _eputs("Set VARIABLE:  \n");
        }
    }else if (custom_strcmp(argvPP[0], "unsetenv") == 0){
        if (argvPP[1] != NULL){
            if (unsetenv(argvPP[1]) != 0)
                _eputs("Failed to unset enviroment \n");
            else 
                _eputs("Unset Enviroment variable: \n");
        }
    } else {
        if (is_command_exist(argvPP[0])) {
            execute_command(argvPP[0], argvPP, envp);
        } else {
            _eputs("Command  does not exist in the PATH.\n");
        }
    }

}