#include "main.h"
/**
 * print_sign - function thatprints a sign of a number
 * @n: will represent the number being printed
 * Return: 1 if n is positive, 0 if n is 0, and -1 if n is less than zero
 * Written by Imraan Thabang Leeuw
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
