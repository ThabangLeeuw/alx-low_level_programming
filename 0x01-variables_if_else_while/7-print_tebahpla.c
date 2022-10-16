#include <stdlib.h>
#include <stdio.h>
/**
 * main - Function
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 'z'; i <= 'a'; i--)
	{
		putchar('%c', i);

	}
	putchar('\n');
	return (0);
}
