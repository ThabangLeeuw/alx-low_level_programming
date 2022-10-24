#include "main.h"
#include <stdio.h>
/**
 * print_array - function name
 * @a: pointer
 * @n: declared variabled
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i; i < n; i++)
	{
		printf("%d ", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
