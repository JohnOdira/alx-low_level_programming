#include "main.h"
#include <unistd.h>

/**
 * print_numbers - function checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
void print_numbers(void)

{
	int _putchar(char c);
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
