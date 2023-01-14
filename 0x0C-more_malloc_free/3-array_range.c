#include "main.h"

/**
 *array_range - returns a pointer to a new array
 *@min: parameter 1
 *@max: parameter 2
 *Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *pt, i;

	if (min > max)
		return (NULL);

	pt = malloc((max - min + 1) * sizeof(*pt));

	if (pt == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		pt[i] = min;

	return (pt);
}
