#include "main.h"
#include <unistd.h>
/**
 * _strchr - function we'll use to locate string
 * @s: pointer
 * @c: character
 * Return: first occurence of C in s, or null if it doesnt exist
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}

	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return ('\0');
}
