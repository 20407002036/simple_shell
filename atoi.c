#include "shell.h"
/*
 * custom - converst string to int
 *
 * @str: pointer to sting
 *
 * Return: Always 0 (Success)
 */
int custom(const char *str)
{
	int result = 0;
	int sign = 1;


	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;

		str++;
	}


	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}

	return (result * sign);
}
