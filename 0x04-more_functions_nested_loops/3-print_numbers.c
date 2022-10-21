#include "main.h"
#include <unistd.h>
/**
 * print_numbers - prints from 0 to 9
 * Return: no return
 */
void print_numbers(void)
{
	int g;

	for (g = 48; g < 58; g++)
	{
		_putchar(g);

	}
	_putchar('\n');
}
