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
	while (*str != '\0')
	{
		_puts(char *str++);
	}
	_putchar('\n');
}
