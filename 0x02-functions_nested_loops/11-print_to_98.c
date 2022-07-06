#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints numerical value from n to 98 followed by new line
 *@n: to check
 *Return: 0 (Success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);

	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
