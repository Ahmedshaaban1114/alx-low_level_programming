#include "main.h"

/**
 * binary_to _unit - converts a binary numbers string to unsigned int
 * @b: binary number as a string
 *
 * Return: the unsigned int of b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int q = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		q = q * 2 + (*b++ - '0');
	}
	return (q);
}
