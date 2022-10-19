#include "main.h"
/**
 * _abs - prints the absolute value
 * @int: will return absolut value
 * Return: returns absolute value
 */
int _abs(int)
{
	int n;

	if (n < 0)
	{
		n = n + (n * 2);
		_putchar(n);

	}
	else
	{
		_putchar(n);
	}
}
