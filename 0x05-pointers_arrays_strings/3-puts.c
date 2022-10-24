#include "main.h"
#include <unist.h>
/**
 * _puts - puts function
 * @str: variable
 */
void _puts(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');

}
