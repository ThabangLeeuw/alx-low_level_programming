#include "main.h"
/**
 * _isupper - function that returns 1 if theres upper amd 0 if theres no
 * @c: defined variable
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
