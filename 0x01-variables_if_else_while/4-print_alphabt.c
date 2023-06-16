
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 27; i++)
	{
		if (i != 4 && i != 17)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

