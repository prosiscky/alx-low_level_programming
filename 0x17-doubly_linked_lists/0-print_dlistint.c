#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint list
 *
 *@h: The head of the list
 *Return: returns the number of nodes traversed
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		printf("You passed an empty list");
		return;
	}
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next
	}

	return (count);
}
