#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: The integer to be printed
 * Return: 0
 */

void print_number(int n)

{
	unsigned int num = n;

	if (n < 0)
	{
	putchar('-');
	num = -n;
	}

	if (num / 10 != 0)
	{	
	print_number(num / 10);
	}
	putchar((num % 10) + '0');
}
