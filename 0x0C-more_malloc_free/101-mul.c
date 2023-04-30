#include <stdlib.h>
#include <stdio.h>

#define ERROR_MESSAGE "Error"

/**
* is_digit - checks if a string contains only digits
* @s: string to be evaluated
*
* Return: 1 if s contains only digits, 0 otherwise
*/
int is_digit(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
return 0;
i++;
}
return (1);
}

/**
* _strlen - returns the length of a string
* @s: string to evaluate
*
* Return: the length of the string
*/
int _strlen(const char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
return (i);
}

/**
* error - prints an error message and exits the program
*/
void error(void)
{
printf("%s\n", ERROR_MESSAGE);
exit(98);
}

/**
* multiply - multiplies two positive numbers
* @s1: first number
* @s2: second number
*
* Return: a pointer to the result of the multiplication
*/
char *multiply(char *s1, char *s2)
{
int len1, len2, len, i, carry, digit1, digit2;
char *result;

len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2 + 1;

result = malloc(sizeof(char) * len);
if (!result)
return NULL;

for (i = 0; i <= len1 + len2; i++)
result[i] = 0;

for (len1 = len1 - 1; len1 >= 0; len1--)
{
digit1 = s1[len1] - '0';
carry = 0;

for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
digit2 = s2[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 * digit2);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;
}

if (carry > 0)
result[len1 + len2 + 1] += carry;
}

return (result);
}

/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
*
* Return: 0 on success, 1 on failure
*/
int main(int argc, char **argv)
{
char *s1, *s2, *result;
int i, a = 0;

if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
error();

s1 = argv[1];
s2 = argv[2];

result = multiply(s1, s2);
if (!result)
error();

for (i = 0; result[i] != '\0'; i++)
{
if (result[i] != 0)
a = 1;
if (a)
putchar(result[i] + '0');
}

if (!a)
putchar('0');

putchar('\n');

free(result);

return (0);
}
