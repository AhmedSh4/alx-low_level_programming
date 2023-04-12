#include "main.h"
#include <stdlib.h>

/**
* argstostr - concatenates all the arguments of your program
* @ac: The number of arguments
* @av: An array of strings containing the arguments
*
* Return: A pointer to a new string, or NULL if it fails
*/
char *argstostr(int ac, char **av)
{
int i, j, k = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
k++;
}
k++;
}

str = malloc(sizeof(char) * k);

if (str == NULL)
return (NULL);

k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}

str[k] = '\0';

return (str);
}
