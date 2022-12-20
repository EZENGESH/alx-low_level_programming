#include "main"
/**
 * _strlen - function that return lengt of a string
 * @s: this is the input string
 * Return: length of a stirng
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] !='\0'; index++)
		;
	return(index);
}
 
