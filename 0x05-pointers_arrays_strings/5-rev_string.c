#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	char rv = s[0];
	int v =0;
	int i;

	while(s[v] != '\0')
		v++;
	for(i = 0; i < v; i++)
	{
		v--;
		rv = s[i];
		s[i] = s[v];
		s[v] = rv;
	}
}
