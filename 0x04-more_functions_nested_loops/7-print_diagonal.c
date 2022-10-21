#include "main.h"
/**
 * print_diagonal - function that will print diagonal lines
 * @n: variable that will be used
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');

	}
}
