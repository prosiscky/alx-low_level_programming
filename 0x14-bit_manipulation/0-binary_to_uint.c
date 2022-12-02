#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number to be converted
 *
 * Return:  the converted number, or 0 if
 *          there is one or more chars in the string b that is not 0 or 1
 *          b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int len = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		len++;
		i++;
	}

	i = 0;
	len = len - 1;

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		result += (b[len] - '0') << i;
		len--;
		i++;
	}
	return (result);
}
