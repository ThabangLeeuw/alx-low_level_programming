#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @n: value being pointed to
 * @s: pointer
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
