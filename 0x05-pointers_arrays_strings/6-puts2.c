#include "main.h"
/**
 * puts2 - function used to print every other char
 * @str: declared variabled
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] >= 0; i++)
	{

		if (str[i] == '\0')
		{
			putchar('\n');
			break;
		}

		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
	}
}
