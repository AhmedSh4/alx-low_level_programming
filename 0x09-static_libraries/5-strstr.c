#include "main.h"

/**
* _strstr - finds the first occurrence of the substring needle in the
* string haystack
* @haystack: string to search in
* @needle: substring to search for
*
* Return: a pointer to the beginning of the located substring, or NULL if
* the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;

if (*needle == 0)
return (haystack);

for (i = 0; haystack[i]; i++)
{
if (haystack[i] == needle[0])
{
for (j = 1; needle[j]; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (&haystack[i]);
}
}
return (0);
}
