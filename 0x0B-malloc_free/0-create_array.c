#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *function that creates array of characters and initializes with one
 *create_array - creates array of char and initializes with one
 *		  and returns NULL if fails
 *@size: number of elements
 *@c: char to initialize
 *return: pointer to memory address
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
