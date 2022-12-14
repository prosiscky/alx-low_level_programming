#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: string to be counted
 * Return: returns the length of string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
