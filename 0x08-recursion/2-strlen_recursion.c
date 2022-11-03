#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - function that prints len of string
 * @s: char used
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
