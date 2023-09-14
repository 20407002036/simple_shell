#include "shell.h"

/**
* tokenize - tokenize input from command line
* @str: input from user_input
* @argv_store: store tokenized arguments
**/

void tokenize(char *str, char *argv[]) 
{
    const char delimiters[] = " ";
    const char *token;
    int i = 0;

    token = strtok(str, delimiters);

    if (token == NULL)
        return;

    while (token != NULL)
    {
        argv[i] = strdup(token);
        i++;
        token = strtok(NULL, delimiters);
    }

    argv[i] = NULL;
}
