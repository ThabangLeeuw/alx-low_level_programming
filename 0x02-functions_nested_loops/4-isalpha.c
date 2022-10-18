#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: Will either be letter, lowercase or uppercase
 * Written by Imraan Thabang Leeuw
 * Return: 1 if c is a char, lowcase or uppercase and return 0 if its neither
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
