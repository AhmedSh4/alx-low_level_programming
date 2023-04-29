#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a linked list
* @head: pointer to the head of the linked list
* @index: index of the node to be deleted
*
* Return: 1 if successful, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *prev;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;
prev = NULL;
for (i = 0; i < index && current != NULL; i++)
{
prev = current;
current = current->next;
}

if (current == NULL)
return (-1);

if (prev == NULL)
*head = current->next;
else
prev->next = current->next;

free(current);
return (1);
}

