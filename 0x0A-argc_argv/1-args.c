#include "main.h"
#include <stdio.h>

/**
 *main - prints args
 *@argc: size
 *@argv: array
 *Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
