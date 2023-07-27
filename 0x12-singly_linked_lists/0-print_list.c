#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @q: the string that length to check
 *
 * Return: integer length of string
 */
int _strlen(char *q)
{
	int i = 0;
	if (!q)
		return (0);
	while (*q++)
		i++;
	return (i);
}
