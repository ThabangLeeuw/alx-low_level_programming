#include "main.h"
/**
 * main - prints alphabets in lowercase
 * Return: 0
 * This program was written by Imraan ThabangLeeuw
 */
int main(void)
{
	int f;

	for (f = 'a'; f <= 'z'; f++)
	{
		_putchar(f + '0');
	}
	_putchar('\n');
	return (0);

}
