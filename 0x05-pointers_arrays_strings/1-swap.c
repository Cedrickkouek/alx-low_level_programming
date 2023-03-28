#include "main.h"
/**
 * swap_int - is the swapping function
 * @a: is the pointer to the first value
 * @b: is the pointer to the second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
