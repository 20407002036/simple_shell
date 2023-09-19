#include "shell.h"

/**
* _eputs -  inputs string to print
* @str: prompt
*/

void _eputs(char *str)
{
    int i = 0;

    if (!str)
        return;

    while (str[i] != '\0')
    {
        _eputchar(str[i]);
        i++;
    }
}