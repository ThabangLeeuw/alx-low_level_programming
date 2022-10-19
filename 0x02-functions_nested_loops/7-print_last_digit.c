#include "main.h"
/**
 * print_last_digit - will print the last digit of a number
 * @p: value that will be printed
 * Return: last digit
 */
int print_last_digit(int p)
{
	int v = p % 10;

	if (v < 0)
	{
		v *= -1;
		_putchar(v + '0');
	}


	else
	{
		_putchar(v + '0');
	}


	return (v);

}
