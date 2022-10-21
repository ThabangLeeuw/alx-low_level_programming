#include "main.h"
/**
 * print_most_numbers - function that will print from 0 -9 and skip 2 and 4
 * Return: void
 */
void print_most_numbers(void)
{
	int p;

	for (p = 48; p < 58; p++)
	{

		if ((p != 50) && (p != 52))
		{
			_putchar(p);
		}
		else
		{
			continue;
		}
		_putchar('\n');

	}
}
