#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Prints a name from a function pointer
 * @name: character string
 * @f: function pointer that takes a string argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
