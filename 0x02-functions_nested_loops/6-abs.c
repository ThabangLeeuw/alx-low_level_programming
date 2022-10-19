#include "main.h"
/**
 * _abs - prints the absolute value
 * @z: will return absolut value
 * Return: returns absolute value
 */
int _abs(int z)
{


	if (z < 0)
	{
		z = z + (z * 2);
		_putchar(z);

	}
	else
	{
		_putchar(z);
	}
}
