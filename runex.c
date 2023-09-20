#include "shell.h"

/**
 * run_exit - exit program
 * @status: status of the shell
 *
 */

void run_exit(int status)
{
	_eputs("Exiting shell.\n");
	exit(status);
}
