#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0
 */

void print_diagsums(int *a, int size)

{
	int i, n, p1 = 0, p2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		p1 = p1 + a[i];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		p2 = p2 + a[n];
	printf("%d, %d\n", p1, p2);
}
