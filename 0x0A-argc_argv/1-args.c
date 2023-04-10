#include <stdio.h>

/**
* main - Prints the number of arguments passed into it
* @argc: The number of command-line arguments
* @argv: An array of pointers to the arguments
*
* Return: 0 if successful
*/
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}

