#include "main.h"

/**
 * swap_int - check the code.
 * @a: integer.
 * @b: integer.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
