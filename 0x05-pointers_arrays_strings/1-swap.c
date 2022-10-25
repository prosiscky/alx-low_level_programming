#include "main.h"
/**
 * swap_int - Swaps the values of two integer
 * @a: value 1
 * @b: value 2
*/

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
