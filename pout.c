#include "shell.h"
#include <stdio.h>

/**
 * print_hello_world - prints header file for both
 * Return: void
 */

void print_hello_world(void)
{
	char *message = "RUNNING...($(SHELL:))";

	_eputs(message);
	_eputs("\n");
}
