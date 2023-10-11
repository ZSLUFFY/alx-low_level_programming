#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - execuates fun
 * @array: array
 * @size: size of array
 * @action: returnvcalue
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
