#include "main.h"
/**
 * swap_int -swaps the values of two intergers
 * @a: Pointer to the first interger.
 * @b: Pointer to the second interger.
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
