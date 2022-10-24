#include "main.h"
/**
 * _puts - puts function
 * @str: variable
 */
void _puts(char *str);
{
	int count;

	while (count >= 0)
	{
		if (str[count] == "\0")
		{
			putchar('\n');
		}
		putchar(str[count]);
		count++;
	}

}
