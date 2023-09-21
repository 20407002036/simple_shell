#include "shell.h"

/**
 * tokenize - tokenize input from command line
 * @str: input from user_input
 * @argv: store tokenized arguments
 *
 */

void tokenize(char *str, char *argv[])
{
	const char delimiters[] = " ";
	const char *token;
	int i = 0;

	token = custom_strtok(str, delimiters);

	if (token == NULL)
		return;

	while (token != NULL)
	{
		argv[i] = custom_strdup(token);
		i++;
		token = custom_strtok(NULL, delimiters);
	}

	argv[i] = NULL;
}
