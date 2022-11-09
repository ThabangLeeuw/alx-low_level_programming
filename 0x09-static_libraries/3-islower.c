#include "main.h"
/**
 * _islower - Tells us how many characters are in lowercase
 * Return: 1 if theres lowercase and 0 if theres no
 * @c: defined as our alphabets
 * Written by Imraan ThabangLeeuw
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
