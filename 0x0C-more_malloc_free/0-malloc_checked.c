#include "main.h"

/**
 *malloc_checked - function that allocates memory using malloc
 *@b: parameter passed to function
 *Return: pointer or NULL if it fails
 */

void *malloc_checked(unsigned int b)
{
	int *pt;

	pt = malloc(b);

	if (pt == NULL)
	{
		exit(98);
	}

	return (pt);
}
