#include "main.h"

/**
 **_strcpy - final question
 *@dest: parameter one
 *@src: parameter two
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];

	dest[x] = '\0';

	return (dest);
}
