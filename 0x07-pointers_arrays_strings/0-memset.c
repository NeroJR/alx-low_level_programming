#include "main.h"

/**
 *_memset - fills in memory with a const byte
 *@s: pointer
 *@b: parameter 2
 *@n: parameter 3
 *Return: pointer to memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
