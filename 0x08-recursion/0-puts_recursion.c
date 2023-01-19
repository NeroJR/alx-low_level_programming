#include "main.h"
#include <string.h>

/**
 *_puts_recursion - function that prints string followed by new line
 *@s: parameter 1
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
