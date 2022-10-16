#include <stdlib.h>
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
		putchar(j + '\n');
	}

	return (0);

}

