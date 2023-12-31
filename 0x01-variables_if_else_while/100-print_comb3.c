#include <stdio.h>

/**
 *main - Entry point, print 00 to 89 using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	for (ones = '0'; ones <= '9'; ones++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			putchar(tens);
			putchar(ones);
			if (!(ones == '9' && tens == '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
