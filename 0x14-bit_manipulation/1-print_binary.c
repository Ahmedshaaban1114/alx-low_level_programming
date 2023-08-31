#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i;
	int r;
	unsigned long int d;

	for (i = 63; i >= 0; i--)
	{
		d = n >> i;
		if (d & 1)
		{
			_putchar (1);
			d++;
		}

		else if (d)
		{
			_putchar (0);
		}
	}

	if (!d)
		_putchar (0);
}
