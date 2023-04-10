#include "main.h"
/**
* _strncat - Concatenates two strings using at most n bytes of src.
* @dest: Destination string.
* @src: Source string.
* @n: Maximum number of bytes of src to use.
*
* Return: Pointer to resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;

/* Find the length of dest */
while (*(dest + dest_len))
dest_len++;

/* Append at most n bytes of src to dest */
for (i = 0; i < n && *(src + i); i++)
*(dest + dest_len + i) = *(src + i);

/* Add null-terminating byte to dest */
*(dest + dest_len + i) = '\0';

return (dest);
}

