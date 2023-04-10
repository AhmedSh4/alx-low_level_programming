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
int sign = 1, i = 0;
unsigned int res = 0;

while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
{
res = (res * 10) + (s[i] - '0');
i++;
}
res *= sign;
return (res);
}
