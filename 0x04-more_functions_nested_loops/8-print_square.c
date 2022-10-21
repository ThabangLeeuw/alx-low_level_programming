#include "main.h"
/**
 * print_square - function to print a square
 * @size:name of the variable
 */
void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size + 1; i++)
	{
		for (j = 0; j <= size; j++)
		{
			if (size != 0)
			{
				_putchar('#');
			}
			else
			{
				_putchar('\n');
			}
		}
		_putchar('\n')
	}

}
