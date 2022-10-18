#include "main.h"
/**
 * _putchar - A function to print character
 * @c: A character to be printed
 * Return: 0 on successful compilation
*/

int _putchar(char c)
{
	if (c == '_')
		_putchar('_');
	else if (c == 'p')
		_putchar('p');
	else if (c == 'u')
		_putchar('u');
	else if (c == 't')
		_putchar('t');
	else if (c == 'c')
		_putchar('c');
	else if (c == 'h')
		_putchar('h');
	else if (c == 'a')
		_putchar('a');
	else if (c == 'r')
		_putchar('r');
	_putchar('\n');
	return (0);
}
