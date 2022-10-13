# include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main (void)
{
	printf("Size of the type char is : %i byte(s):", sizeof(char));
	printf("Size of the type in is : %i byte(s):", sizeof(int));
	printf("Size of the type long int is: %i byte(s):", sizeof(long int));
	printf("Size of long long int is: %i byte(s)", sizeof(long long int));
	printf("Size of the type float is: %i byte(s)", sizeof(float));
	return (0);
}

