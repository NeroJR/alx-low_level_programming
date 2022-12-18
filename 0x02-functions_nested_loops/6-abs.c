#include "main.h"

/**
 *_abs - returns the absolute value of a number
 *
 *Return: 0
 */

int _abs(int x)
{
	if (x < 0)
		x = x * -1;
	else
		x = x;

	return (x);
}
