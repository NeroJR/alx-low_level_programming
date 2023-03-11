#include "main.h"
#include <string.h>

/**
 *_pow_recursion - raises a variable to a power
 *@x: value passed
 *@y: power to raise to
 *Return: the raised value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	return (0);
}
