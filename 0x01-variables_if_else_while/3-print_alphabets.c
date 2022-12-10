#include<stdio.h>
/**
 * main -entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	char i;

	c = 'a';
	i = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while (c <= 'Z') {
			putchar(i);
			i++;
		}
	putchar('\n');
	return (0);
}
