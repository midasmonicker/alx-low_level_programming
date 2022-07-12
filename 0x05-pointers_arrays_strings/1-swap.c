#include "main.h"

/**
 * swap_int - use pointer to swap 2 integers
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
	return ();
}

