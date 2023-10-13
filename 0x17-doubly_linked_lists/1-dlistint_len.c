#include "list.h"

/**
 *
 * dlistint_len - print lenth of doubly-linked list
 * @h: address of head node
 *
 * Return: size of list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t a = 0;

while (h)
{
h = h->next;
a++;
}
return(a)
}
