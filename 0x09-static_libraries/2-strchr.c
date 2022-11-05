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

	int i = 0;

	while (s[i] != '\0')
	{
		i++;
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return ('\0');
}
