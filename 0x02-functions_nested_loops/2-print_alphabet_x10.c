#include "main.h"

/**
 * function print_alphabet_x10(void) - prints 10 times lowecase alphabet
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
	_putchar(' ');
}
