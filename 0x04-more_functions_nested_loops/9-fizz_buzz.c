#include "main.h"
#include <stdio.h>

/**
* main - Entry point
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
if ((i % 3 == 0) && (i % 5 == 0)) // check if number is a multiple of both 3 and 5
printf("FizzBuzz");
else if (i % 3 == 0) // check if number is a multiple of 3
printf("Fizz");
else if (i % 5 == 0) // check if number is a multiple of 5
printf("Buzz");
else // otherwise, print the number itself
printf("%d", i);

if (i < 100) // add a space after the number or word, except for the last one
printf(" ");
}

printf("\n"); // add a newline at the end of the output

return (0);
}
