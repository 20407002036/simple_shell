#include "shell.h"

/**
 * custom_strtok - strtok prototype
 * @str: string
 * @delim: delimeter
 * Return: Start
 */

char *custom_strtok(char *str, const char *delim)
{
	char *token = NULL;
	char *end, *start;

	if (str != NULL)
		token = str;

	if (token == NULL)
		return (NULL);

	start = token;
	end = custom_strchr(token, *delim);

	if (end != NULL)
	{
		*end = '\0';
		token = end + 1;
	}
	else
		token = NULL;

	return (start);
}

