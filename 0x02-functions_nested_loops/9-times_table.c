#include "main.h"
/**
 * times_table - the function that will print the nine times table
 * Return: 0
 */
void times_table(void)
{
	int h;
	int y;
	int res;

	for (h = 0; h <= 9; h++)
	{
		_putchar('0');

		for (y = 1; y <= 9; y++)
		{
			_putchar(',');
			_putchar(' ');
			res = h * y;

			if (res <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((res / 10) + '0');
			}
			_putchar((res % 10) + '0');
		}
		_putchar('n');
	}
}
