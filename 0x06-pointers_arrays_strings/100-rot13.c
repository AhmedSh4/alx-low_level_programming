#include "main.h"
#include <stdio.h>

/**
* rot13 - encodes a string using rot13
* @s: the string to encode
*
* Return: the encoded string
*/
char *rot13(char *s)
{
char *p = s;
char *alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*s)
{
char *temp = alphabets;
char *temp2 = rot13;
int found = 0;

while (*temp)
{
if (*temp == *s)
{
*s = *temp2;
found = 1;
break;
}
temp++;
temp2++;
}
if (found)
s++;
else
s++;
}
return (p);
}

