#include "function_pointers.h"

/**
 *int_index - function that searches for int
 *@array: parameter
 *@size: parameter
 *@cmp: function pointer
 *Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
