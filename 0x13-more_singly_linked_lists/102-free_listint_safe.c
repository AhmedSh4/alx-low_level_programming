#include "lists.h"

/**
* free_listint_safe - frees a listint_t list.
* @h: pointer to a pointer to the head of the list.
*
* Return: the size of the list that was free’d.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *current, *next;

if (!h)
return (0);

current = *h;
while (current)
{
count++;
next = current->next;
free(current);
if ((void *)current <= (void *)next)
break;
current = next;
}
*h = NULL;
return (count);
}

