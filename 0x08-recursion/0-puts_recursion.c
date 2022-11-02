#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _puts_recursion - function that will be used to print string
 * @s: the string that will be printed
 * Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
