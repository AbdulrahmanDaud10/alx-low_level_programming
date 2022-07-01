#include <stdio.h>

/**
 * main - Entry Point
 *
 * Result: 0 (Success)
 */
int main(void)
{	
	char character;
	char alphabet = 'a';

	while(alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');

	return (0);
}
