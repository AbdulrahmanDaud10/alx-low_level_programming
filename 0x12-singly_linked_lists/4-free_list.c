#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_list - free a `list_t` list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
