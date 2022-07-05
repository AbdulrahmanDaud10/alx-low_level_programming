#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char myPrint[] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		printf(myPrint[i]);
	}
	putchar('\n');

	return (0);
}
