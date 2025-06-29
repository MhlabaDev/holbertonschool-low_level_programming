#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a provided function.
 * @name: The name to print.
 * @f: A pointer to a function that takes a char pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
