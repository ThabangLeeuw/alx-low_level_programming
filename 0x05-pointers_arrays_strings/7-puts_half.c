#include "main.h"
/**
 * puts_half - function that will be used to print half of the string
 * @str: declared variable
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}

	}

	if (i % 2 == 1)
	{
		j =  i / 2;
	}
	else
	{
		j = (i - 1) / 2;
	}

	for (j++; j <  i; j++)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
