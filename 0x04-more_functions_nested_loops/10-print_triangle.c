#include "main.h"


/**
 *print_triangle - prints a triangle
 *
 *@size: size of triangle
 *Return: 0
 */

void print_triangle(int size)
{
	int count = 0;
	int i;

	if (size > 0)
	{
		while (count < size)
		{
			i = size;
			while (i > count + 1)
			{
				i--;
				_putchar(' ');
			}
			while (i > 0)
			{
				_putchar('#');
				i--;
			}
			count++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
