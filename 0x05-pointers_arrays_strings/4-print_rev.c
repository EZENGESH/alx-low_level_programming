#include "main.h"
/**
 * print_rev - print string in revervse
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (count--; count >= 0; count--)
		putchar(s[count]);
	puthchar('\n');
}
