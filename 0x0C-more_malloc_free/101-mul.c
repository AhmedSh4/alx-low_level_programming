#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERROR_MESSAGE "Error"
/**
* is_number - checks if a string contains only numerical characters
* @str: string to be evaluated
* Return: 1 if the string contains only numerical characters, 0 otherwise
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
int string_length(char *str)
{
int length = 0;
while (str[length] != '\0')
length++;
return (length);
}
void exit_with_error(void)
{
printf("%s\n", ERROR_MESSAGE);
exit(98);
}
/**
* main - multiplies two positive numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 1 on failure
*/
int main(int argc, char *argv[])
{
char *num1, *num2;
int len1, len2, len_result, i, carry, digit1, digit2, *result, result_has_value = 0;
num1 = argv[1], num2 = argv[2];
if (argc != 3 || !is_number(num1) || !is_number(num2))
exit_with_error();
len1 = string_length(num1);
len2 = string_length(num2);
len_result = len1 + len2 + 1;
result = malloc(sizeof(int) * len_result);
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
for (i = 0; i < len_result - 1; i++)
{
if (result[i])
result_has_value = 1;
if (result_has_value)
putchar(result[i] + '0');
}
if (!result_has_value)
putchar('0');
putchar('\n');
free(result);
return (0);
}
