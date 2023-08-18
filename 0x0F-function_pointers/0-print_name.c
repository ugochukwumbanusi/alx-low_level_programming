#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name
 * @name: The name to be printed
 * @f: A pointer to a function that prints
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
