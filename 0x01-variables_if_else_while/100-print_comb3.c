#include<stdio.h>
/**
 * main - entry piont
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;	
	int j;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 10; j <= 99; j++)
		{
			putchar(%02d, i);
			putchar(j + '0');
				if (i < 10 && j < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		putchar('\n');
		return (0);
}
