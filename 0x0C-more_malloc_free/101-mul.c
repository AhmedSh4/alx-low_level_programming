#include "main.h"

/**
* print_result - moves a string one place to the left and prints the string
* @str: string to move
* @len: length of string
*
* Return: void
*/
void print_result(char *str, int len)
{
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
{
mul = (n - '0') * (num[j] - '0') + mulrem;
mulrem = mul / 10;
add = (dest[k] - '0') + (mul % 10) + addrem;
addrem = add / 10;
dest[k] = add % 10 + '0';
}
for (addrem += mulrem; k >= 0 && addrem; k--)
{
add = (dest[k] - '0') + addrem;
addrem = add / 10;
dest[k] = add % 10 + '0';
}
if (addrem)
{
return (NULL);
}
return (dest);
}

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
return (0);
}

/**
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
*/
int main(int argc, char *argv[])
{
int len1, len2, len_result, ti, i;
char *result;
char *temp;
char error[] = "Error\n";

if (argc != 3 || check_for_digits(argv))
{
for (ti = 0; error[ti]; ti++)
_putchar(error[ti]);
exit(98);
}
}
_print(a, ln - 1);
return (0);
}
