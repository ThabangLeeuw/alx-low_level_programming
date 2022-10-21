#include "main.h"
/**
 * print_most_numbers - function that will print from 0 -9 and skip 2 and 4
 */
void print_most_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{

		if ((p != 2) && (p != 4))
		{
			_putchar(p + '0');
		}
		else
		{
			continue;
		}
		_putchar('\n');

	}
}
