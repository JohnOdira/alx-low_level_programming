#include "main.h"

/**
 * _strncpy - A function that copies string
 * @dest: Storing the string copy
 * @src: The source of string
 * @n: The maximun number of copies from the src
 * Return: A pointer resulting from string dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
