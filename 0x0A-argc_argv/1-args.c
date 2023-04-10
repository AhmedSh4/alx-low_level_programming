#include <stdio.h>
#include "main.h"
/**
* main - Prints the number of arguments passed into it
* @argc: The number of command-line arguments
* @argv: An array of pointers to the arguments
*
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);

return (0);
}

