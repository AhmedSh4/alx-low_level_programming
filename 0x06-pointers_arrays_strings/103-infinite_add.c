#include "main.h"

/**
* infinite_add - adds two numbers
* @n1: first number
* @n2: second number
* @r: buffer to store the result
* @size_r: buffer size
*
* Return: pointer to the result, or 0 if result can't be stored in r
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
int i = 0, j = 0;

while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
if (len1 + 2 > size_r || len2 + 2 > size_r)
return (0);
i = len1 - 1;
j = len2 - 1;
r[size_r - 1] = '\0';
while (i >= 0 || j >= 0)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
carry = sum / 10;
r[--size_r] = sum % 10 + '0';
i--;
j--;
}
if (carry > 0)
{
if (size_r == 1)
return (0);
r[--size_r] = carry + '0';
}
return (&r[size_r]);
}

