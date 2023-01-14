#include "main.h"

/**
 *_realloc - reallocates memory block using malloc and free
 *@ptr: pointer to previously allocated memory
 *@old_size: size of allocated space
 *@new_size: size of new memory block
 *Return: pointer to new memory, or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt, *cp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		pt = malloc(new_size);

		if (pt == NULL)
			return (NULL);

		return (pt);
	}

	pt = malloc(new_size);

	if (pt == NULL)
		return (NULL);

	cp = ptr;

	for (i = 0; i < old_size; i++)
		pt[i] = cp[i];

	free(ptr);

	return (pt);
}
