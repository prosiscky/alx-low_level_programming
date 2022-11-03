#include "main.h"
/**
 * _pow_recursion -Raises a number to a power
 * @x: The number to be raised
 * @y: The power to be raised to
 * Return: The the raised value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
