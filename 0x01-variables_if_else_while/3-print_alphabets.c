#include <stdlib.h>
/**
 * main - Function
 * Return: 0
 *
 */
int main(void)
{
	char alph[52] = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ';
	int i;

	for (i = 0; i < 52; i++)
	{
		puthcar(alph[i]);
	}
	putchar('\n');
	return (0);

}

