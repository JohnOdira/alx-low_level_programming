#include <stdio.h>

/**
 * main - Prints sum
 * Return: Always 0.
 */

int main(void)

{
	int i = 0;
	long p = 1, r = 2, sum = r;

	while (r + p < 4000000)
	{
		r += p;
		if (r % 2 == 0)
		sum += r;
		p = r - p;
		++i;
	}
	printf("%ld\n", sum);
	return (0);
}
