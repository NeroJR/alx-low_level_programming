#include "main.h"

/**
 *_abs - returns the absolute value of a number
 *
 *@x: parameter passed to function
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
