#include<stdio.h>
/**
 * main - entry piont
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ones = n /10;	
	int tens = n % 10;
	int n;
	for (ones = 0; ones < 10; ones++)
	{
		for (tens = 10; tens < 100; tens++)
		{
			if (ones < 10 || tens > ones)
			{
				putchar(n + '0');
				if (n < 10 && n < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

		putchar('\n');
		return (0);
}
