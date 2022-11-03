#include "main.h"
#include <stdio.h>
/**
 * factorial - name of function
 * @n: declared variable
 * Return: -1 for error, 1 if the factorial number is 0
 */
int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
