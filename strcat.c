#include "shell.h"

/**
 * custom_strcat - changes
 * @dest: pointer to string
 * @src: source
 * Return: char
 */

char *custom_strcat(char *dest, const char *src)
{
	char *original_dest = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}

