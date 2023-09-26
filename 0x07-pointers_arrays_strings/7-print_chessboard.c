#include "main.h"

/**
 * print_chessboard - Entry point
 * @a: array
 * Return: Always 0
 */

void print_chessboard(char (*a)[8])

{
	int p, n;

	for (p = 0; p < 8; p++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[p][n]);
		putchar('\n');
	}
}

