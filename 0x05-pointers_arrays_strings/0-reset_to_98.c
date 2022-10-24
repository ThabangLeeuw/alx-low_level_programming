#include "main.h"
#include <unistd.h>

/**
 * reset_to_98 - function I will use to declare pointers
 * @n: the pointer variable name
 * Program written by Imraan Thabang Leeuw
 */
void reset_to_98(int *n)
{
	int p = 98;
	*n = &p;

	putchar(n);
}
