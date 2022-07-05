#include "main.h"

/**
 * void print_alphabet_x10(void) - prints 10 times the alphabet in loowercase followed by newli
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
	}

	_putchar('\n');
}
