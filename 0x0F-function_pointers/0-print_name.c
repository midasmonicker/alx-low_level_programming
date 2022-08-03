#include <stddef.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: pointer variable of type char
 * @f: pointer to a function variable of type char
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	f(name);
}
