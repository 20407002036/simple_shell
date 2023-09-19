#include "shell.h"

/**
* main - main program
* Return: 0 Success Always
*/

int main(int argc, char *argv[], char *envp[]) 
{    
    _eputs("RUNNING...($(SHELL)) \n");

    if (argc > 1) 
        process_command(argv[1], envp);
    else {
        char *user_input = NULL;
        ssize_t len_buff;
        size_t size = 0;

        while (1) {
            _eputs("Enter command $: ");

            len_buff = custom_getline(&user_input, &size, stdin);

            if (len_buff == -1) {
                printf("\nExiting...\n");
                break;
            }

            if (len_buff > 0 && user_input[len_buff - 1] == '\n') {
                user_input[len_buff - 1] = '\0';
            }

            process_command(user_input, envp);
        }

        free(user_input);
    }

    return 0;
}