#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Assigns a random number to a variable each time it excutes
 * description :prints " This program will assign a random number"
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
/* my code is here */
	if (n > 5)
	{
		printf("greater than 5\n");
	}
	if (n == 0)
	{
		printf("is zero\n");
	}
	if (n < 6 && n != 0)
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
