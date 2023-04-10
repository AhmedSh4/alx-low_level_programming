#include "main.h"
#include <limits.h>

/**
* _atoi - converts a string to an integer
* @s: the string to convert
*
* Return: the integer value of the string
*/
int _atoi(char *s)
{
int sign = 1, num = 0, digit, prev_num = 0;

while (*s)
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
num = num * 10 + digit;

if (num < prev_num || num > INT_MAX - digit)
{
if (sign == 1)
return INT_MAX;
else
return INT_MIN;
}
prev_num = num;
}
else if (num > 0)
break;
s++;
}
return num * sign;
}
