#include "lists.h"

/**
* pop_listint - Deletes the head node of a listint_t linked list and
*               returns the head node's data (n).
* @head: A pointer to a pointer to the first node in the listint_t list.
*
* Return: The head node's data (n).
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if (*head == NULL)
return (0);

temp = *head;
*head = (*head)->next;
n = temp->n;
free(temp);

return (n);
}

