#include "main.h"

/**
 * print_array - prints elements of an array of interger
 * @a: parameter tested
 * @n: number of elements of the array to be printed
 * Description: Numbers should be separated by comma followed by space
 * numbers should be displayed in the same order as they are stored
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
	printf("\n");
}
