#include "main.h"
/**
 * more_numbers - The function
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 0);
			}
			_putchar((j % 10) + 0);
		}
		_putchar('\n')
	}
}
