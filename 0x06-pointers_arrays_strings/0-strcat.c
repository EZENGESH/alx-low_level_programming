3include "main.h"
/**
 * strcat - concatenate the string pointed
 *
 * @dest: this is the destination
 * @src: this the source of the string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len=0;

	while (dest[index++])
		dest_len;
	for (index = 0; src[index]; index++)
		dest(dest_len++) = src(index);
	return (dest);
}
