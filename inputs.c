#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * inputs - deals with the inputs made to the prompt
 *
 * @token: pointer to the inputs made to the prompt
 *
 * Return: void
 */
void inputs(char *token)
{

  /*	printf("\t%s\n", token);
   */

	if (*token == ';' || *token == ' ' || *token == '\t'
			|| *token == '\n')
	{
		printf("The CLI accepts only one word command!\n");

	}

}
