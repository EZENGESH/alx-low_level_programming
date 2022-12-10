#include<stdio.h>
/**
 * main - entry piont
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i; /* ones digits */
	
	int j; /* tens digit */
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j => 10; j++)
		{
			if (!((i == j) || (j > i)))
			{
				putchar((i/10) + '0');
				putchar((j%10) + '0');
				if (!(i == 9 && j == 99))
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
