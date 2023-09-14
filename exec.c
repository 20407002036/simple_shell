#include "shell.h"

/**
* execute_command - runs command of shell
* @command: tokenized argv[0] / user_input[1]
* @argv: tokenized from argv[1] 
*/

void execute_command(char *command, char *argv[]) {
    pid_t pid;
    int status;

    pid = fork();

    if (pid == 0) {
        if (execvp(command, argv) == -1) {
            perror("Execution failed");
            exit(EXIT_FAILURE);
        }
    } else if (pid < 0) {
        perror("Fork Failed!");
    } else {
        waitpid(pid, &status, 0);
    }
}