#include "main.h"
/**
* _strncat - Concatenates two strings.
* @dest: Destination string.
* @src: Source string.
* @n: Maximum number of bytes of src to use.
*
* Return: Pointer to resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0, i;

while (*(dest + dest_len))
dest_len++;

for (i = 0; i < n && *(src + i); i++)
*(dest + dest_len + i) = *(src + i);

*(dest + dest_len + i) = '\0';

return (dest);
}
