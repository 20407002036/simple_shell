#include "shell.h"

/**
* run_env - run enviroment 
*
*/

void run_env() {
    extern char** environ;
    int i = 0;

    while (environ[i] != NULL) {
        _eputs(environ[i]);
        _eputs("\n");
        i++;
    }
}
