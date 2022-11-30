#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new node
  *                           at a given position.
  * @head: a pointer to the list head address.
  * @idx: position to insert new node
  * @n: the data of the new node.
  *
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int i;

	tmp = *head;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = tmp;
		*head = newnode;
		return (newnode);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (tmp->next == NULL)
		{
			return (NULL);
		}
		tmp = tmp->next;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
