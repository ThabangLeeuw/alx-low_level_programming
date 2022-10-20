#include <stdio.h>
/**
 * main - causes an infite loop
 * Return: 0
 */
int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i); /** remove this line, it is not necessary for this program**/
		/** missing an increment i++; **/
	}
	printf("Infinite loop avoided! \\o/\n");

	return (0);

}
