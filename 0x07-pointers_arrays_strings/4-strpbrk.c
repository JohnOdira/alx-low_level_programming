#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */

char *_strpbrk(char *s, char *accept)

{
	int p, n;

	for (p = 0; s[p] != '\0'; p++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[p] == accept[n])
			return (s + p);
		}
	}
	return (NULL);
}
