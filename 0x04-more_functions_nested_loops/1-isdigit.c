#include "main.h"

/**
 *_isdigit - checks if a character is a digit
 *
 *@c: parameter for function
 *Return: 0
 */

int _isdigit(int c)
{
	int value;

	if (c >= '0' && c <= '9')
		value = 1;
	else
		value = 0;

	return (value);
}
