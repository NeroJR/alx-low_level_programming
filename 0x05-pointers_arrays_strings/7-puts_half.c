#include "main.h"

/**
 *puts_half - prints half of string
 *@str: paramter
 */

void puts_half(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		continue;
	x++;

	for (x /= 2; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
