#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Function
 *
 * Retun: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	if (n > 5)
		printf("and is greater is 5");
	else if (n == 0)
		printf("and is 0");
	else if (n < 6; n != 0)
		printf("and is less than 6 and not 0");
	return (0);
}
