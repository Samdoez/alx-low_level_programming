#include "function_pointers.h"

/**
 * array_iterator - the iterator
 * @array: the array
 * @size: the size
 * @action: the action
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
