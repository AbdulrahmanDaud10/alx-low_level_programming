#include "main.h"

/**
 * swap_int - swap function for two given interger
 * @a: int pointer type
 * @b: int pointer type
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
