#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');

	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);

}
