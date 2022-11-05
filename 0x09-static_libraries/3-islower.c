#include "main.h"
/**
 * _islower - A function that checks for lower case letter
 *
 * @c: character entered by user
 *
 * Return: 1 if successfull 0 otherwise
*/

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
