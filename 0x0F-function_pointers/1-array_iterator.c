#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function prototype
 * @array: pointer of type int
 * @size: size of array
 * @action: pointer to function of type int
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int x;

	if (array != NULL && action != NULL)
	for ((x = 0); x < size; x++)
	{
		action(array[x]);
	}
}
