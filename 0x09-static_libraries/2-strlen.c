#include "main.h"
/**
 * _strlen - Returns the length of a string
 * @s: string variable whose length should be found
 * Return: length of the string
*/

int _strlen(char *s)
{
int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}

