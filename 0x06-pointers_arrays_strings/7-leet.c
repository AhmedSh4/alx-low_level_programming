#include "main.h"
/**
* leet - encodes a string into 1337
* @str: the string to be encoded
*
* Return: a pointer to the encoded string
*/
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_nums = "4433007711";

while (*ptr)
{
int i;

for (i = 0; leet_chars[i]; i++)
{
if (*ptr == leet_chars[i])
{
*ptr = leet_nums[i];
break;
}
}

ptr++;
}

return str;
}

