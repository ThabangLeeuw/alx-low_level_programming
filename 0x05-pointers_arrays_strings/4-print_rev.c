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
		if (s[b] == '\0')
		{
			break;
		}
		b++;
	}

	for (b--; b >= 0; b--)
	{
		putchar(s[b]);
	}
	putchar('\n');
}
