#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	{
	if (!head)
		return;

	free_list(head->next);
	if (head->str)
		free(head->str);
	free(head);
}
