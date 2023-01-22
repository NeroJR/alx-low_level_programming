#include "function_pointers.h"

/**
 *print_name - prints name
 *@name: name to print
 *@f: function to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
