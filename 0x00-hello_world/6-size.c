#include <stdio.h>
/**
 * main - Project six on c program
 * Return 0
 */
int main(void)
{
char b;
int d;
long int n;
long long int m;
float p;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(p));
return (0);
}
