#include "main.h"

/**
 * print_array - Prints n elements of an array.
 * @a: The array.
 * @n: The number of elements to print.
 *
 * Return: None.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}