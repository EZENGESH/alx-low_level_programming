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
int i = 0;
while (*(str + i) != '\0')
{
putchar(*(str + i));								i++;
}
putchar(10);
}
