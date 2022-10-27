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

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
