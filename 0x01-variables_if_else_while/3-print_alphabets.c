#include <stdlib.h>
#include <stdio.h>

/**
 * main - Function
 * Return: 0
 *
 */
int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		puthcar(i);
	}
	for (j = 'A'; j = 'Z'; j++)
	{
		putchar(j);
	}
	putchar ('\n');

	return (0);

}

