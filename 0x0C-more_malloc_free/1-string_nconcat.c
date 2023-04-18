#include "main.h"
#include <stdlib.h>

/**
* string_nconcat - Concatenates two strings
*
* @s1: First string
* @s2: Second string
* @n: Number of bytes to concatenate from s2
*
* Return: Pointer to newly allocated space in memory
*         containing s1 followed by the first n bytes of s2
*         and null-terminated, or NULL if the function fails
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0, i, j;
char *result;

if (s1 != NULL)
{
while (s1[len1] != '\0')
len1++;
}

if (s2 != NULL)
{
while (s2[len2] != '\0')
len2++;
}

if (n >= len2)
n = len2;

result = malloc(sizeof(char) * (len1 + n + 1));

if (result == NULL)
return (NULL);

for (i = 0; i < len1; i++)
result[i] = s1[i];

for (j = 0; j < n; j++)
{
result[i] = s2[j];
i++;
}

result[i] = '\0';

return (result);
}

