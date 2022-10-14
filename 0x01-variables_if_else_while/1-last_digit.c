#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Function
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int f;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	f = n % 10;

	if (f > 5)
		printf("Last digit of %d is %d and is greater is 5", n, f);
	else if (n == 0)
		printf("Last digit of %d is %d and is 0", n, f);
	else if (n < 6, n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, f);
	return (0);
}
