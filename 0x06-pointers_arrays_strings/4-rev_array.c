#include "main.h"

/**
* reverse_array - reverses an array of integers
* @a: the array to reverse
* @n: the number of elements in the array
*/
void reverse_array(int *a, int n)
{
int i, j, tmp;

for (i = 0, j = n - 1; i < j; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}

