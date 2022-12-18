#include "main.h"

/**
 *print_sign - prints sign of a number
 *
 *@n: parameter passed to function
 *Return: 1 for positive
 *        0 for zero
 *       -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('\n');
}
