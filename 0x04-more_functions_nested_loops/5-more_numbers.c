#include "main.h"
/**
 * more_numbers - prints num 0-14 10 times
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j);
		}
	}
}
