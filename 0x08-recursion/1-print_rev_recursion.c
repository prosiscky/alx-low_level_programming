/**
 *_print_rev_recursion - prints string in reverse;
 *@s: string array to be recieved
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
