#include "main.h"

/**
 * string_toupper - function that changes lowercase string to upper case
 * @f: input string
 * Return: f
 */
char *string_toupper(char *f)
{
	int k = 0;

	while (*(f + k) != '\0')
	{
		if ((*(f + k) >= 97) && (*(f + k) < 123))
		{
			*(f + k) = *(f + k) - 32;
		}
		k++;
	}

	return (f);
}
