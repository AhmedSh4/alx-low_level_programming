#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Prints the minimum number of coins to make change for an amount of money.
* @argc: Number of arguments passed to the program.
* @argv: Array of pointers to strings containing the arguments.
*
* Return: 0 if successful, 1 if an error occurred.
*/
int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2) /* Check if exactly one argument was passed */
{
printf("Error\n");
return 1;
}

cents = atoi(argv[1]); /* Convert the argument to an integer */

if (cents < 0) /* Check if the amount is negative */
{
printf("0\n");
return 0;
}

coins = 0;

/* Compute the number of coins required */
while (cents > 0)
{
if (cents >= 25)
cents -= 25;
else if (cents >= 10)
cents -= 10;
else if (cents >= 5)
cents -= 5;
else if (cents >= 2)
cents -= 2;
else
cents -= 1;

coins++;
}

printf("%d\n", coins); /* Print the result */

return 0;
}}

