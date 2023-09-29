#include "main.h"
#include <stdio.h>

/**
 * main - Prints number of arguments
 * @argc: The count
 * @argv: The vector
 * Return: Always 0
 */

int main(int argc, char *argv[])

{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
