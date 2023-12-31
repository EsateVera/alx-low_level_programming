#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: head of double pointer
 * @n: int add the list.
 * Return: Null if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_pt;
	listint_t *temp = *head;

	new_pt = malloc(sizeof(listint_t));
	if (!new_pt)
	return (NULL);

	new_pt->n = n;
	new_pt->next = NULL;

	if (*head == NULL)
	{
		*head = new_pt;
		return (new_pt);
	}

	while (temp->next)
	temp = temp->next;

	temp->next = new_pt;

	return (new_pt);

}
