#include "lists.h"

/**
  * sum_listint - returns the sum of all the data (n) of a
  *               listint_t linked list.
  * @head: pointer to the linked list
  *
  * Return: if the list is empty, return (0) or (sum);
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	if (head == NULL)
	{
		return (0);
	}

	tmp = head;

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
