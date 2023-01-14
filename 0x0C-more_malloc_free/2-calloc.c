#include "main.h"

/**
 *_calloc - allocates memory for array using malloc
 *@nmemb: parameter 1
 *@size: parameter 2
 *Return: returns pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pt;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	pt = malloc(nmemb * size);

	if (pt == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		pt[i] = 0;

	return (pt);
}
