#include "main.h"
#include <string.h>

/**
* is_palindrome - check if a string is a palindrome
* @s: the string to check
*
* Return: 1 if the string is a palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
int len = strlen(s);

if (len <= 1)
return (1);

if (*s != s[len - 1])
return (0);

return (is_palindrome(s + 1, len - 2));
}
