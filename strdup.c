#include "shell.h"

/**
 * custom_strdup - string duolicate
 * @str: string to duplicate
 * Return: duplicate
 */

char *custom_strdup(const char *str)
{

	int i, len = 0;
	const char *temp = str;
	char *duplicate;

	while (*temp != '\0')
	{
		len++;
		temp++;
	}

	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
