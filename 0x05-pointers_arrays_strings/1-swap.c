#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
