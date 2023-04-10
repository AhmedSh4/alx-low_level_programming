#include "main.h"
/**
* cap_string - capitalizes all words of a string.
* @s: pointer to input string.
*
* Return: pointer to resulting string.
*/
char *cap_string(char *s)
{
int i = 0;
int cap_next = 1;

while (s[i] != '\0')
{
if (cap_next && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
cap_next = 0;
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
cap_next = 1;
}
i++;
}
return (s);
}

