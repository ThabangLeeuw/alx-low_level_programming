#include "main.h"
#include <unistd.h>
/**
 * _strncat - function that will concatenate two strings
 * @dest: pointer we appending strings to
 * @src: pointer we getting strings from
 * @n: stop appending when string is n bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) == *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
