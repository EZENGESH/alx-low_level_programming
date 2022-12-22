#include "main.h"
#include<unistd.h>
/**
 * _putchar - write character c to stdout
 *
 * @c: The character to print
 *
 * Return: Always success 1
 * error, -1 is returned, errno is set approppriate
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
