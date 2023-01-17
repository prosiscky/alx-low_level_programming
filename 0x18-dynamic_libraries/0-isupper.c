#include "main.h"

/**
 * _isupper - Checks for uppercase letter
 * @c: Input letter to be checked
 * Return: returns 1 if c is upper and 0 otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
