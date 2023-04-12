#include <stdlib.h>
#include "main.h"

/**
* count_words - counts the number of words in a string
* @s: the string to count words in
*
* Return: the number of words in the string
*/
int count_words(char *s)
{
int i, count = 0;

for (i = 0; s[i]; i++)
{
if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
count++;
}

return count;
}

/**
* get_word_length - gets the length of a word in a string
* @s: the string to get the word length from
* @start: the starting index of the word
*
* Return: the length of the word
*/
int get_word_length(char *s, int start)
{
int len = 0;

while (s[start + len] && s[start + len] != ' ')
len++;

return len;
}

/**
* free_matrix - frees memory allocated for a matrix
* @matrix: the matrix to free
* @rows: the number of rows in the matrix
*/
void free_matrix(char **matrix, int rows)
{
int i;

for (i = 0; i < rows; i++)
free(matrix[i]);

free(matrix);
}

/**
* strtow - splits a string into words
* @str: the string to split
*
* Return: a pointer to an array of strings (success), or NULL (failure)
*/
char **strtow(char *str)
{
char **wow;
int i, j, k = 0, words, word_len;

if (!str || !*str)
return NULL;

words = count_words(str);

wow = malloc(sizeof(char *) * (words + 1));
if (!wow)
return NULL;

for (i = 0; i < words; i++)
{
while (*str == ' ')
str++;

word_len = get_word_length(str, 0);

wow[i] = malloc(sizeof(char) * (word_len + 1));
if (!wow[i])
{
free_matrix(wow, i);
return NULL;
}

for (j = 0; j < word_len; j++)
wow[i][j] = *(str++);

wow[i][j] = '\0';
}

wow[i] = NULL;

return wow;
}
