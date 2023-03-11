#include "main.h"
#include <stdio.h>

/**
 *set_string - sets value of pointer to char
 *@s: parameter 1
 *@to: parameter 2
 */

void set_string(char **s, char *to)
{
	*s = to;
}
