#include "main.h"

/**
* _strcmp - Compare two strings.
*
* @s1: A pointer to the first character of the first string.
* @s2: A pointer to the first character of the second string.
*
* Return: An integer less than, equal to, or greater than zero if s1 is found,
* respectively, to be less than, to match, or be greater than s2.
*/
int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
return (s1[i] - s2[i]);
}

if (s1[i] != s2[i])
return (s1[i] - s2[i]);

return (0);
}

