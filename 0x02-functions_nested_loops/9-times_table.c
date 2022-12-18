#include "main.h"

/**
 *times_table - prints multiplication table
 *
 *Return: 0
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i * j);

			for (j < 9)
				_putchar(', ');
		}
		_putchar('\n');
	}
}
