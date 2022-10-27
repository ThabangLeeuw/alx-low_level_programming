#include "main.h"
/**
 * _strncpy - function used to copy strings
 * @dest: pointer we copying intp
 * @src: pointer we copying from
 * @n : number of times loop will run
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
