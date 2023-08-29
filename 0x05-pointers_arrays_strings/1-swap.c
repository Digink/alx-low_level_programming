#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Pointer to the first integer to swap.
 * @b: Pointer to the second integer to swap.
 *
 * Description: This function swaps the values of two integers
 * using a temporary variable.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
