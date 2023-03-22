#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
int i, carry, term1, term2;
term1 = 1;
term2 = 2;
printf("%d, %d", term1, term2);

for (i = 3; i <= 98; i++)
{
carry = term1 + term2;
printf(", %d", carry);
term1 = term2;
term2 = carry;
}
printf("\n");

return 0;
}
