#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabets
*/

void print_alphabet_x10(void)

{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		int count = 0;

		while (count <= 9)
		{
			_putchar(alph);
			_putchar('\n');
			count++;
		}
	}
}
