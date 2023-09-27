#include "main.h"

/**
 * _strlen_recursion - Gives lenghth of string
 * @s: input value
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - Compares each character
 * @s: input
 * @n1: smallest
 * @n2: largest
 * Return: .
 */

int comparator(char *s, int n1, int n2)

{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (0 + comparator(s, n1 + 1, n2 - 1));
}
return (0);
}

/**
 * is_palindrome - Detects a string
 * @s: input
 * Return: 1 if palindrome, 0 if false
 */

int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (comparator(s, 0, _strlen_recursion(s) - 1));
}
