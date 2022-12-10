#include<stdio.h>
/**
 * main - entry piont
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	
	for (i = 1; i < 100; i++)
	{
		putchar((i%10) + '1');
		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}

