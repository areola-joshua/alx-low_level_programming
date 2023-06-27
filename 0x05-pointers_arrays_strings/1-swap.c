#include "main.h"

/**
 * sap_int - saps the values of two integers
 * @a: int a
 * @b: int b
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
