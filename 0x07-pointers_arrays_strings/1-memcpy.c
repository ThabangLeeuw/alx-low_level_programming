#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _memcpy - function that copies n bytes from one memory area to another
 * @src: memory area
 * @dest: memory area 2
 * @n : number of bytes
 * Return: poiinter to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int u;

	for (u = 0; u < n; u++)
	{
		*(dest + u) = *(src + u);
	}
	return (dest);
}
