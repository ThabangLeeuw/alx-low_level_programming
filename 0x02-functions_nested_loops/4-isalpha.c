#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Will either be letter, lowercase or uppercase
 * Written by Imraan Thabang Leeuw
 * Return: 1 if c is a char, lowcase or uppercase and return 0 if its neither
 */
int _isalpha(int c)
{
	if (c >= 'z' && c <= 'a')
	{
		return (1);
	}
	else if (c >= 'Z' && c <= 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
