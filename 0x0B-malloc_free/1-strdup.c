#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	int r = 0, size = 0;
	char *k;

	if (str == 0)
		return (0);

	for (; str[size] != '\0'; size++)
	;

	k = malloc(size * sizeof(*str) + 1);

	if (k == 0)
		return (0);

	else

	{
		for (; r < size; r++)

			k[r] = str[r];
	}
	return (k);
}
