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
		for (j = 0; j <= 9; j++)
		{
			if (!((i == j) || (j > i)))
			{
			putchar(i + '0');
			putchar(j + '0');
				if (i > 0 && j < 100)
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
