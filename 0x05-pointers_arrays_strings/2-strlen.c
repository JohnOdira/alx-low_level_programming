#include <stdio.h>

/**
 * _strlen - Retuns the length of a string
 * @str: The string to get the length
 * Return: The length of a string
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
