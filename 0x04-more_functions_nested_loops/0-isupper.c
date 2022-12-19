#include "main.h"

/**
 *_isupper - checks for uppercase
 *
 *@c: parameter for function
 *Return: 0
 */

int _isupper(int c)
{
	int value = 0;

	if (c >= 'A' && c <= 'Z')
	{
		value = 1;
	}
	else
	{
		value = 0;
	}
	return (value);
}
