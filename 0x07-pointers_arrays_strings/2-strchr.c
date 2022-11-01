#include "main.h"
#include <stdio.h>

/**
 * _strchr - check the code
 *
 * @s: string containing character to be searched for
 * @c: character to be searched for
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	return (0);
}
