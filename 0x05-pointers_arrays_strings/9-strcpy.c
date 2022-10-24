#include "main.h"
/**
 * _strcpy - function;
 * @dest: variable we copying to
 * @src: variable we copying from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
	}
	return (dest);
}
