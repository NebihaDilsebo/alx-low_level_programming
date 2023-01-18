#include "function_pointer.h"
#include <stdlib.h>

/**
 * print_name - function that prints name
 * @name: name to print
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
