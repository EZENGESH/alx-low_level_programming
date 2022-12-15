#include "main.h"
#include <unistd.h>
/**
 * _putchar write character c to stdout
 * @c: the character to print
 *
 * Return: on 1 succcess
 * On error, -1 is returned, errno is appropiate
 */
int _putchar(char)
{
	return(write(1, &c, 1));
}
