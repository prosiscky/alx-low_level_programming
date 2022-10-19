#include "main.h"

/**
 *_abs-prints the absolute value of an entered number.
 *@i:the integer to compute its absolute value.
 *Return:returns the abs value.
 *
*/

int _abs(int i)
{
	int i = 0;
	int absval;

	if (i < 0)
	{
		i = i * (-1);
	}
	absval = i;
	return (absval);
}
