#include "main.h"
/**
 * swap_int - function that will be used for this program
 * @a: the first variable
 * @b: the second variable
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	int d = *a;

	*a = c;
	*b = d;

}
