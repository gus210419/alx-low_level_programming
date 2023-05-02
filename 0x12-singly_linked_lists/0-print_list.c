#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print the contents of a list.
 * @h: pointer to list.
 *
 * Return: Elements in a list
 */

size_t print_list(const list_t *h)
{
	size_t elem;

	for (elem = 0; h; elem++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (elem);
}
