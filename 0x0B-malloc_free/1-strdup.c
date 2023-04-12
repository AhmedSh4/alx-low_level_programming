#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**

* _strdup - duplicate to new memory space location

* @str: char

* Return: 0

*/
char *my_strdup(char *src)
{
char *dest;
int i, len = 0;

while (src[len])
len++;

dest = malloc(sizeof(char) * (len + 1));

if (dest == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dest[i] = src[i];

return (dest);
}

