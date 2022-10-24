#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: variable that will be used in this function
 */
void rev_string(char *s)
{
	int l = 0, i, j;
	char *str, temp;

	while (l >= 0)
	{
		if (s[l] == '\0')
		{
			break;
		}
		l++;
	}
	str = s;

	for (i = 0; i < (l - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
