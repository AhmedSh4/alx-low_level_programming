#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to pointer to the beginning of the list
* @idx: index where new node should be inserted
* @n: data for the new node
*
* Return: address of the new node, or NULL on failure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current = *head;
unsigned int i;

if (!head)
return (NULL);

new_node = malloc(sizeof(*new_node));
if (!new_node)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

for (i = 0; i < idx - 1; i++)
{
if (!current)
{
free(new_node);
return (NULL);
}

current = current->next;
}

new_node->next = current->next;
current->next = new_node;

return (new_node);
}

