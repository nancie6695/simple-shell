#include "shell.h"

/**
 * interactive - returns true shell is interactive mode
 * @info: struct address
 *
 * Return: 1 interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
    if (isatty(STDIN_FILENO) && info->readfd <= 2) {
        
        return 1; 
    } else {

     return 0;
    }
}


