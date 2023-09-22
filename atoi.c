#include "shell.h"
/**
 *custom_atoi - converst a string to int
 *
 * @str: pointer to the string
 *
 * Return: always 0 (Success)
 */
int custom_atoi(const char *str)
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
