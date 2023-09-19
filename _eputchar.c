#include "shell.h"

/**
* _eputchar- output char
* @c: character
*/

int _eputchar(char c)
{

    /* if (c == BUF_FLUSH || i >= WRITE_BUF_SE)
    static int i; 
    static char buf[WRITE_BUF_SIZE];
    {
        buf[i++] = c;
        i = 0;
    }*/

    if (c != BUF_FLUSH)
        write(1, &c, 1);

    return (1);
}