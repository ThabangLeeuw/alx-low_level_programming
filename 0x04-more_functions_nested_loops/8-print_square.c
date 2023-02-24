#include "main.h"
/**
 * print_square - function to print a square
 * @size:name of the variable
 */
void print_square(int size)
{
	int hgt, wid;

	if (size > 0)
	{
		for (hgt = 0; hgt < size; hgt++)
		{
			for (wid = 0; wid < size; wid++)
				_putchar('#');

			if (hgt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
