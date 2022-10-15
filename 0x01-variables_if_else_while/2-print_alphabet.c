#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Function
 * Return: 0
 */
int main(void)
{
	int n;

	char t = tolower();

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	putchar(t + "\n");
	return (0);
}
