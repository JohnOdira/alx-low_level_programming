#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: A pointer to string one
 * @s2: A pointer to string two
 * Return: If str1 < str2, the neg difference of the
 * first unmatched characters.
 * If str1 == str2, 0.
 * If str1 > str2, the positive difference of the first unmatched characters,
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
