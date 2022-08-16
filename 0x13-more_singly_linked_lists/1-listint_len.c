#include "lists.h"
#include <stdio.h>
/**
 * print_listint_len - function that returns the number of elements in a linked list
 * @h: the head of the linked list
 * Return: the number of elements in alinked list
 */
size_t listint_len(const listint_t *h)
{
	size_t b;

	for (b = 0; h; b++)
		h = h->next;
	return (b);
}
