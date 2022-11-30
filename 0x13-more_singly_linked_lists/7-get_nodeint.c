#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: a pointer to the head of the list
  * @index: the  index of the node to return
  *
  * Return: if the node does not exist, return NULL or the node at the given
  *         index
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}

	return (head);
}
