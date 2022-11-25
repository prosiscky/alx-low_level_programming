#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns number of elements of a list_t list.
 * @h: The list_t list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
