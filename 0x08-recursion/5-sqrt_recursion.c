#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Gets natural square root
 * @n: Number to get natural square root
 * Return: Natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Gets natural square root
 * @n: Number to get the natural square root
 * @i: Iterate number
 * Return: natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	return (-1);

	if (sqrt == n)
	return (i);
	return (_sqrt(n, i + 1));
}
