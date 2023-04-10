#include "main.h"

/**
* print_number - prints an integer using only _putchar
* @n: the integer to print
*/
void print_number(int n)
{
int div = 1;

if (n < 0) {
_putchar('-');
n = -n;
}

while (n / div >= 10)
div *= 10;

while (div > 0) {
_putchar(n / div + '0');
n %= div;
div /= 10;
}
}

