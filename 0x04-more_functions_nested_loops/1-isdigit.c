#include "main.h"
/**
 * _isdigit - prints digits and return 1 if digits and 0 if otherwise
 * @c: returns 1 if digits and 0 if otherwise
 * Return: same as above
 */
int _isdigit(int c)
{
	int i;

	for (i = 0; i <= 9; i++)

		if (c >= i  && c <= 9)
			return (1);
		else
			return (0);
}
