#include "main.h"
/**
* main - multiplies two positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
int i, j, len1, len2, len_result, ti;
char *result, *a, *b;

if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
_puts("Error");
return (98);
}

len1 = _strlen(argv[1]);
len2 = _strlen(argv[2]);
len_result = len1 + len2;
result = malloc(sizeof(char) * (len_result + 1));
if (result == NULL)
return (1);

_memset(result, '0', len_result);
result[len_result] = '\0';
a = argv[1];
b = argv[2];
for (i = len1 - 1; i >= 0; i--)
{
ti = len_result - (len1 - i);
for (j = len2 - 1; j >= 0; j--)
result[ti--] += (a[i] - '0') * (b[j] - '0');
}
for (i = len_result - 1; i >= 0; i--)
{
if (result[i] > 9)
{
result[i - 1] += (result[i] / 10);
result[i] %= 10;
}
}
if (*result == '0')
_puts(result + 1);
else
_puts(result);

free(result);
return (0);
}

/**
* is_positive_number - checks if a string represents a positive number
* @s: string to check
* Return: 1 if s represents a positive number, 0 otherwise
*/
int is_positive_number(char *s)
{
while (*s != '\0')
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
