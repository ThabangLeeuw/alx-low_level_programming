#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * power_operation - function that prints sqrt
 * @n: declared variable
 * @c: iterator
 * Return: -1 if num is not a natural number
 */
int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + power_operation(n, c + 1));
}
/**
 * _sqrt_recursion - function
 * @n: declared variable
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (power_operation(n, 2));
}
