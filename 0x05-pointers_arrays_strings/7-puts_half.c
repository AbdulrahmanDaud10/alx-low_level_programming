#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: char parameter array string type
 * Description:  If odd number of character, print (length - 1) / 2
 * Return - void
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
