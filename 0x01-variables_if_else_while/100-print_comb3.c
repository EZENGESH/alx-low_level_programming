#include<stdio.h>
/**
 * main - entry piont
 *
 * Return: Always 0 (success)
 */

int main(void)

	int ones = '0';	
	int tens = '0';
	
	for (ones = '0'; ones <= '9'; ones++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			if (!((ones == tens) || (tens > ones)))
			{
				putchar(ones);
				puthcar(tens);
				if (!((ones == '9' && tens == '8')
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
