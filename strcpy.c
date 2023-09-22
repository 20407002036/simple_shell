#include "shell.h"

/**
 *custom_strcpy - custom files for the simple shell project
 *
 * @dest: pointer to string
 * @src: constant called src
 * Description: The function does the following
 * Return: void
 */
void custom_strcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
}
