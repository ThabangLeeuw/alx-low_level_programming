#include "main.h"
#include <unistd.h>

/**
 * _strcat - Function that will concatenate two strings
 * @dest: string that will be appended to
 * @src: string we are appending from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);

		if (*(src + j) == '\0')
		{
			break;
		}

		i++;
		j++;
	}
	return (dest);
}
