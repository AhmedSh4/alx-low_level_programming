#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all elements of a list_t list.
* @h: Pointer to the list_t list to print.
*
* Return: The number of nodes in the list_t list.
*/
size_t print_list(const list_t *h)
{
size_t node_count = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}

node_count++;
h = h->next;
}

return (node_count);
}
