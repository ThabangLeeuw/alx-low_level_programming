#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 0; i <= 16; i++)
	{
		putchar((i % 16) + '0');

	}
	putchar('\n');
	return (0);
}
