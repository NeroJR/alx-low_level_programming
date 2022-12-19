#include "main.h"

/**
 *print_square - prints a square
 *@size: variable
 *Return: 0
 */

void print_square(int size)
{
	int count1 = 0;
	int count2;

	if (size > 0)
	{
		while (count1 < size)
		{
			count2 = 0;

			while (count2 < size)
			{
				_putchar('#');
				count2++;
			}
			_putchar('\n');
			count1++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
