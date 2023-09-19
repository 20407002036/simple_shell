#include "shell.h"
#include <stdio.h>

/**
*         HEADER TEMPLATE 
* print_hello_world - prints header
*/

void print_hello_world(void)
{
    char *message = "RUNNING...($(SHELL:))";
    _eputs(message);
    _eputs("\n");
}