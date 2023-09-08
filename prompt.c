#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * main - handles the prompt
 *
 * @argc: No of arguements to main
 * @argv: array of arguements to main
 *
 * Return: int
 */
int main(int argc, char *argv[])
{ char user_input[1024];
	const char *token;
	const char delimiters[] = " \t\n";
	/*	char solo[1024];
	 */
	
	if (argc > 1 || argv[1] != NULL )
	{
		printf("No arguements to MAIN\n");
	}

	while (1)
	{
		printf("Enter your command: ");

		if (fgets(user_input, sizeof(user_input), stdin) != NULL)
		{
			token = user_input;
			token = strtok(user_input, delimiters);

			while (token != NULL)
			{

				token = strtok(NULL, delimiters);
			}

			inputs(user_input);

			/*	printf("%s\n", solo);*/

			printf("input is : %s\n", user_input);

		}
		else
		{
			perror("fgets");
		}
	}
	return (0);
}


