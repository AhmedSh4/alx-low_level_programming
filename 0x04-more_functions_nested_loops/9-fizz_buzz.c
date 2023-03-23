#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers 1 to 100 but with
 * Fizz instead of multiples of 3 and Buzz instead
 * of multiples of 5. For multiples of both 3 and
 * 5, FizzBuzz is printed.
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz ");
else if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else
printf("%d ", i);
}

printf("\n");

return 0;
}

