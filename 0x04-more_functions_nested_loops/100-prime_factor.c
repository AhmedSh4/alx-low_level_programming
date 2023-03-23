#include <stdio.h>
#include <math.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
long n = 612852475143;
long factor = 2;
long largest_factor;

while (n > 1)
{
if (n % factor == 0)
{
n /= factor;
largest_factor = factor;
}
else
{
factor++;
}
}

printf("%ld\n", largest_factor);

return (0);
}
