#include <stdio.h>

/**
 * main - Entry point
 *
 * Result: 0 (Success)
 */
int main(void)
{
	int numbers;
	char alphabets;

	for (numbers = 0; numbers <= 10; numbers++)
		putchar((numbers % 10) + '0');

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	putchar('\n');

	return (0);
}
