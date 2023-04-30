#include "main.h"
/**
* main - multiplies two positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, 98 on failure
*/
int main(int argc, char *argv[])
{
<<<<<<< HEAD
int i, j;
i = j = 0;
while (i < len)
{
if (str[i] != '0')
j = 1;
if (j || i == len - 1)
_putchar(str[i]);
i++;
}
_putchar('\n');
free(str);
}

/**
* multiply - multiplies a char with a string and places the answer into dest
* @n: char to multiply
* @num: string to multiply
* @num_last_index: last non NULL index of num
* @dest: destination of multiplication
* @dest_last_index: highest index to start addition
*
* Return: pointer to dest, or NULL on failure
*/
char *multiply(char n, char *num, int num_last_index, char *dest, int dest_last_index)
{
int j, k, mul, mulrem, add, addrem;
mulrem = addrem = 0;
for (j = num_last_index, k = dest_last_index; j >= 0; j--, k--)
=======
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
>>>>>>> a68d862369183accc56a46b0cb9bee6bce3319a3
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

<<<<<<< HEAD
/**
* check_for_digits - checks the arguments to ensure they are digits
* @args: pointer to arguments
*
* Return: 0 if digits, 1 if not
*/
int check_for_digits(char **args)
{
int i, j;
for (i = 1; i < 3; i++)
{
for (j = 0; args[i][j]; j++)
{
if (args[i][j] < '0' || args[i][j] > '9')
return (1);
}
}
=======
free(result);
>>>>>>> a68d862369183accc56a46b0cb9bee6bce3319a3
return (0);
}
/**
<<<<<<< HEAD
* init_string - initializes a string
* @str: string to initialize
* @len: length of string
*
* Return: void
*/
void init_string(char *str, int len)
{
int i;
for (i = 0; i < len; i++)
str[i] = '0';
str[i] = '\0';
}
/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: argument vector
*
* Return: zero, or exit status of 98 if failure
=======
* is_positive_number - checks if a string represents a positive number
* @s: string to check
* Return: 1 if s represents a positive number, 0 otherwise
>>>>>>> a68d862369183accc56a46b0cb9bee6bce3319a3
*/
int is_positive_number(char *s)
{
<<<<<<< HEAD
int len1, len2, len_result, ti, i;
char *result;
char *temp;
char error[] = "Error\n";
if (argc != 3 || check_for_digits(argv))
=======
while (*s != '\0')
>>>>>>> a68d862369183accc56a46b0cb9bee6bce3319a3
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}
