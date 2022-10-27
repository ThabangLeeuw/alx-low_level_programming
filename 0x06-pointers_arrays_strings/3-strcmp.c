#include "main.h"
/**
 * _strcmp - function that compairs two strings
 * @s1: first variable
 * @s2: second variable
 * Return: 0 if strings are the same and a different number if they are not
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int res = 0;

	while (res == 0)
	{
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
		res = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (res);
}
