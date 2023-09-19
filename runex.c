#include "shell.h"

/**
* run_exit - exit program
*
*/

void run_exit(int status)
{
    _eputs("Exiting shell.\n");
    exit(status);
}