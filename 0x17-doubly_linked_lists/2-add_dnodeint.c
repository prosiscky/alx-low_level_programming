#include "list.h"

/**
 * add_dnodeint - Adds new node at the beginning
 * @head: The head of the list
 * @n: data stored in the node
 * Return: returns address of the new node or Null
 *	if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
