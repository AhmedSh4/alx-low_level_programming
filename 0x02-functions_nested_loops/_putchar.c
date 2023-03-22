#include "main.h"
#include <unistd.h>

/**
 * _putchar - character c to stdout
 * print @c
 *
 * 1 if success
 * -1 if error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
