#include "main.h"
/**
 * _puts_recursion - Prints a string
 * @s: A string of characters
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
