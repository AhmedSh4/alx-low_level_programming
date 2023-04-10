#include "main.h"
#include <limits.h>

/**
* _atoi - Converts a string to an integer.
*
* @s: The string to be converted.
*
* Return: The integer value of the converted string.
*/
int _atoi(char *s)
{
int sign = 1, num = 0, prev_num = 0, digit;

while (*s)
{
if (*s == '-')
sign *= -1;
if (*s >= '0' && *s <= '9')
{
digit = *s - '0';
num = num * 10 + digit;
if (num < prev_num || num > INT_MAX - digit)
{
if (sign == 1)
return INT_MAX;
return INT_MIN;
}
prev_num = num;
}
if (*s == ';')
break;
s++;
}
return num * sign;
}
