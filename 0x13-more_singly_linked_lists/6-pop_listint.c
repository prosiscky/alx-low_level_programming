#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: pointer to address of the head of the list
  *
  * Return: head node’s data (n) or if the linked list is empty return 0
  */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (n);
}
