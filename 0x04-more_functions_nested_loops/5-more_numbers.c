#include "main.h"

/**
 *more_numbers - prints 1 to 14 ten times
 *Return: 0
 */

void more_numbers(void)
{
	int i;
	int count;

	for (count = 1; count < 11; count++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
