#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * _puts - puts function
 * @str: variable
 */
void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[count]);
		count++;
	}
}
