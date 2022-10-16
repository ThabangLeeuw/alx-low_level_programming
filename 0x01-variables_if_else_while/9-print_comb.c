#include <stdlib.h>
#include <stdio.h>
/**
 * main -Function
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	return (0);
}
