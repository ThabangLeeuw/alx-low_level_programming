#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function used to create a function
 * @size: The size of the chars
 * @c: specified char
 * Return: NUll if size == 0 and pointer to array if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *fd;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	fd = malloc(sizeof(c) * size);

	if (fd == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		fd[i] = c;
	}

	return (fd);
}
