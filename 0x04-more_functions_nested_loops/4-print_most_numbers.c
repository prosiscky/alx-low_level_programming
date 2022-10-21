#include "main.h"
/**
 * print_most_numbers - prints num 0-9 skip 2and 4
 */

void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c == '2' || c == '4')
		{
			continue;
		}
		_putchar(c);
	}
_putchar('\n');
}
