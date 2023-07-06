#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
int i, bit_count = 0;
unsigned long int mask;

for (i = 63; i >= 0; i--)
{
mask = n >> i;

if (mask & 1)
{
_putchar('1');
bit_count++;
}
else if (bit_count)
_putchar('0');
}
if (!bit_count)
_putchar('0');
}
