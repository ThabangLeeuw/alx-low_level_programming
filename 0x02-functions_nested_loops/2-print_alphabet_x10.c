#include "main.h"
/**
 * print_alphabet_x10 - prints 10 rows of the alphabet
 * Return: 0
 * Written by Imraan ThabangLeeuw
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 'a'; b < 'z' + 1; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
	return (0);
}
