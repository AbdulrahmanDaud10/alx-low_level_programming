#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Functions that searches for an integer
 * @array: array of integer
 * @size: size of array
 * @cmp: function pointer
 * Return: index of the first element that matches with 'cmp', or -1 if none found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
