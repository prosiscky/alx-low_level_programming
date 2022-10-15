#include <stdio.h>
/**
 * main - a function that prints alphabets
 *
 * Return:0 returns 0 on success
*/

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
