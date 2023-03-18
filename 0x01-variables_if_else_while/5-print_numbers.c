#include <stdio.h>

/**
<<<<<<< HEAD
 *main -> prints all single digit numbers of
 *base 10 starting from 0, followed by a new line
=======
 *main -> prints all single digit numbers of 
 *base 10 starting from 0, followed by a new line.
>>>>>>> 7d8f187a45b03d4aa531e919deabc3b410ff9e16
 *Return: Always 0 (Success)
 */
int main(void)
{
int n;

for (n = 0; n < 10; n++)
{
printf("%d", n);
}
printf("\n");
return (0);
}
