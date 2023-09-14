#include "shell.h"

/**
* free_args - frees tokenized args
* @argv: arguments to run
*/

void free_args(char *argv[])
{
    int j = 0;

    while (argv[j] != NULL)
    {
        free(argv[j]);
        j++;
    }
}   