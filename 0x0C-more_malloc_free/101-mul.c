#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int is_valid_number(char *num);

/**
* main - multiplies two positive numbers
*
* @argc: the number of arguments passed to the program
* @argv: an array of strings containing the arguments
*
* Return: 0 on success, 98 on failure
*/
int main(int argc, char **argv)
{
int i, j, len1, len2, len_result;
char *num1, *num2, *result;

if (argc != 3 || !is_valid_number(argv[1]) || !is_valid_number(argv[2]))
{
printf("Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
len1 = strlen(num1);
len2 = strlen(num2);
len_result = len1 + len2;
result = calloc(len_result + 1, sizeof(char));
if (result == NULL)
{
printf("Error\n");
return (98);
}
for (i = len1 - 1; i >= 0; i--)
{
int carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
int product = (num1[i] - '0') * (num2[j] - '0');
int sum = result[i + j + 1] + product + carry;
carry = sum / 10;
result[i + j + 1] = sum % 10;
}
result[i + j + 1] = carry;
}
for (i = 0; i < len_result; i++)
{
if (result[i] != 0)
break;
}
for (; i < len_result; i++)
printf("%d", result[i]);
printf("\n");
free(result);
return (0);
}
/**
* is_valid_number - checks if a string is a valid number
*
* @num: the string to check
*
* Return: 1 if the string is a valid number, 0 otherwise
*/
int is_valid_number(char *num)
{
int i, len;
len = strlen(num);
if (len == 0)
return (0);
for (i = 0; i < len; i++)
{
if (num[i] < '0' || num[i] > '9')
return (0);
}
return (1);
}
