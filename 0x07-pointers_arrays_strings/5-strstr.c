#include "main.h"
#include <string.h>

/**
 *_strstr - function that locates a substring
 *@haystack: parameter 1
 *@needle: parameter 2
 *Return: pointer to substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}

		if (!*pattern)
		{
			return (start);
		}
		haystack  = start + 1;
	}

	return (0);
}
