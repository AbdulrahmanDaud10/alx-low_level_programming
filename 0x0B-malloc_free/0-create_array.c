#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters & initializes it
 * with a specific character
 * @size: the size of the array
 * @c: array of character of type interger
 * Return: NULL if size is 0 or pointer to the array
 * or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pt = malloc(size);

	if (size == 0 || pt == 0)
		return (0);
	while (size--)
		pt[size] = c;
	return (pt);
}
