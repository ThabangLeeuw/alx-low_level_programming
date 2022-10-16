#include <stdio.h>
#include <stdlib.h>
/**
 * main - Function
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);

		if (i == 'q' || i == 'e')
		{
			continue;

		}

	}

	putchar('\n');

	return (0);

}
