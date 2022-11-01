#include "main.h"
/**
 * _memset - A function that that fills a set of memory with a constant byte.
 * @s: an array of memory address
 * @b: a constant value to be filled
 * @n: number of memory to be created
*/

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	s[a] = b;

	return (s);
}
