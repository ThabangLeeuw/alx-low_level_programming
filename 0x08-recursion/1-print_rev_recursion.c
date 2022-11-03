#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - function used to reverse a string
 * @s: variable we will be reversing
 * Return: no return
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
