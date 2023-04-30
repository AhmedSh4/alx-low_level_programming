#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERROR_MSG "Error"

/**
* is_number - checks if a string contains only digits
* @str: the string to be checked
*
* Return: 1 if the string contains only digits, 0 otherwise
*/

int is_number(char *str)
{
int i = 0;

while (str[i])
{
if (str[i] < '0' || str[i] > '9')
return (0);
i++;
}
return (1);
}

/**
* string_length - returns the length of a string
* @str: the string to be evaluated
*
* Return: the length of the string
*/

int string_length(char *str)
{
int i = 0;
while (str[i] != '\0')
{
i++;
}
return (i);
}

/**
* exit_with_error - prints an error message and exits the program
*/

void exit_with_error(void)
{
printf("%s\n", ERROR_MSG);
exit(98);
}

/**
* main - multiplies two positive numbers
* @argc: the number of command-line arguments
* @argv: an array containing the command-line arguments
*
* Return: always 0 (Success)
*/

int main(int argc, char *argv[])
{
char *num1, *num2;
int len1, len2, len, i, carry, digit1, digit2, *result, flag = 0;

num1 = argv[1], num2 = argv[2];

if (argc != 3 || !is_number(num1) || !is_number(num2))
exit_with_error();

len1 = string_length(num1);
len2 = string_length(num2);
len = len1 + len2 + 1;
result = malloc(sizeof(int) * len);
if (!result)
return (1);
for (i = 0; i <= len1 + len2; i++)
result[i] = 0;
for (len1 = len1 - 1; len1 >= 0; len1--)
{

digit1 = num1[len1] - '0';
carry = 0;
for (len2 = string_length(num2) - 1; len2 >= 0; len2--)
{

digit2 = num2[len2] - '0';
carry += result[len1 + len2 + 1] + (digit1 * digit2);
result[len1 + len2 + 1] = carry % 10;
carry /= 10;

}
if (carry > 0)
result[len1 + len2 + 1] += carry;
}
for (i = 0; i < len - 1; i++)
{

if (result[i])
flag = 1;
if (flag)
putchar(result[i] + '0');
}

if (!flag)
putchar('0');
putchar('\n');
free(result);
return (0);
}
