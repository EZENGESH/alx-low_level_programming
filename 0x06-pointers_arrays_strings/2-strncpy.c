#include "main.h"
/**
 * strncpy - copies at most an inpuu=tted number of bytes
 * 		from sre to dest
 *
 * @dest: the buffer storing string copy
 * @src: The maximum number of bytes to copied from src
 *
 * Return: A pointer to the resulting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}

