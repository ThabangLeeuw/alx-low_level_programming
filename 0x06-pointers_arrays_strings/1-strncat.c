#include "main.h"
/**
 * _strncat - function that will concatenate two strings
 * @dest: pointer we appending strings to
 * @src: pointer we getting strings from
 * @n: stop appending when string is n bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) == *(src + j);
		if (*(src + j) == n)
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
