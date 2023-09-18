#include "shell.h"
/**
 * command_line_interpreter - interactive and non-interactive shell
 * @argc: No of arguements from main
 * @argv: array of arguements from main
 * Return: int
 */
void command_line_interpreter(int argc, char *argv[])
{ 
    char *user_input = NULL;
    ssize_t len_buff;
    size_t size = 0;

     if (argc > 1) 
    {
      process_command(argv[1]);
     } 
     else 
      {
        while (1) 
        {
            printf("Enter command $: ");

            len_buff = getline(&user_input, &size, stdin);

            if (len_buff == -1)
            {
                printf("\nExiting...\n");
                break;
	    }
	    //handles also the return Key, which shoud not be the case.
            if (len_buff > 0 && user_input[len_buff - 1] == '\n')
	      {
		user_input[len_buff - 1] = '\0';

            process_command(user_input);
	      }
	    if (len_buff == 0)
	      {
		continue;
	      }
        }

	   free(user_input);
	 }
}

