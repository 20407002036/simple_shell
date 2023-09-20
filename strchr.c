#include "shell.h"

/**
 * custom_strchr - compare str to char
 * @str: string to comapre
 * @c: ascii to compare
 * Return: NULL
 */

char *custom_strchr(const char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return ((char *)str);

		str++;
	}

	return (NULL);
}
