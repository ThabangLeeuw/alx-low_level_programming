#include "main.h"
/**
 * print_rev - Function that will print in reverse
 * @s: will return the string in reverse
 */
void print_rev(char *s)
{
	int b = 0;

	while (b >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}

	for (i--; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
