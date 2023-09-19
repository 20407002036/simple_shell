#include "shell.h"

/**
* custom_strcmp - compare strings 
* @str1: string 1
* @str2: string 2
* Return: comparison
*/

int custom_strcmp(const char *str1, const char *str2)
{
    if (str1 == NULL || str2 == NULL)
        return (0);

    while (*str1 != '\0' && *str2 != '\0')
    {
        if (*str1 != *str2)
            return (*str1 - *str2);

        str1++;
        str2++;
    }

    return (*str1 - *str2);
}