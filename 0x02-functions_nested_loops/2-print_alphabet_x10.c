#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets
*/

void print_alphabet_x10(void)

{
	char alph;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph)
		}
	}
}
