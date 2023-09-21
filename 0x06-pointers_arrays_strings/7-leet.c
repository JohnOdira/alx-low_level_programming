#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
int a, b;
char s1[] = "aeotl";
char S1[] = "AEOTL";
char s2[] = "43071";

for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; b < 10; b++)
{
if (s[a] == s1[b] || s[a] == S1[b])
{
s[a] = s2[b];
break;
}
}
}
return (s);
}
