#include"main.h"
/**
 * _puts - write a function that print a string, follwed by a new line to 
 * stdout.
 *
 * @str: this my string
 *
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		putchar(str[index]);
	}
	_putchar('\n');
}
