#include <stdio.h>

void print_before_main(void) __attribute__ ((constructor));

/**
* print_before_main - Function that prints a string before the main function is executed.
*
* Return: Nothing.
*/
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
