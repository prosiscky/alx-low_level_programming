#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - checks if malloc() was successful
 * @b: size of memory to be allocated
 * Return: Returns 98 on failure
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}
}
