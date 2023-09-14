#include "shell.h"

/**
* main - main program
* Return: 0 Success Always
*/

int main(int argc, char *argv[], __attribute__((unused)) char *envp[])
{
    print_hello_world();
    
    if (argc > 0)
        command_line_interpreter(argc, &argv[0]);
    else 
    {
        perror("ERROR: No argument");
        exit(99);
    }

    return (0);
}

