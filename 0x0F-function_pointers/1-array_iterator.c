#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Executives a function given as a
 * parameter on each element of an array
 * @array: The array
 * @size: The size of array
 * @action: A pouinter to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
