#include "shell.h"
/*
 * custom_strcpy - custom files
 * @dest: pointer to string
 * @src: source
 * Retrun: void
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
