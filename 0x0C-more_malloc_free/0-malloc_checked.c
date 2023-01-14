#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc
 *@b: parameter passed to function
 *Return: pointer or NULL if it fails
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = mallob(b);

	if (pt == NULL)
		exit(98);

	return (pt);
}
