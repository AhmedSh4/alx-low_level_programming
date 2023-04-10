#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* rot13 - encode a string using the rot13 algorithm
* @s: pointer to the string to encode
*
* Return: pointer to the encoded string, or NULL if s is NULL
*/
char *rot13(char *s)
{
if (s == NULL)
return (NULL);

char *encoded = malloc(sizeof(char) * (strlen(s) + 1));
if (encoded == NULL)
return (NULL);

const char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
const char *rot   = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (int i = 0; s[i] != '\0'; i++)
{
char *p = strchr(alpha, s[i]);
if (p == NULL)
encoded[i] = s[i];
else
encoded[i] = rot[p - alpha];
}

encoded[strlen(s)] = '\0';
return (encoded);
}
