#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: string to copy
*
* Return: pointer to new string, or NULL if allocation fails
*/
char *_strdup(char *src)
{
char *dup;
int i, len = 0;

if (src == NULL)
return (NULL);

while (src[len])
len++;

dup = malloc(sizeof(char) * (len + 1));

if (dup == NULL)
{
printf("Failed to allocate memory\n");
return (NULL);
}

for (i = 0; i <= len; i++)
dup[i] = src[i];

return (dup);
}
