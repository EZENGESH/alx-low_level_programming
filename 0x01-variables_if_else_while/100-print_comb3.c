#include<stdio.h>
/**
 * main - entry piont
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	
	for (i = 0; i < 100; i++)
	{
		putchar((i/10) + '0');

		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}

