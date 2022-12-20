#include <stdio.h>

#include "main.h"
/**
 * print_array - prints n element of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d, ", a[r]);
		if  (r != n - 1)
		{
			printf(",");
			printf(" ");
	}
	printf('\n');
}
