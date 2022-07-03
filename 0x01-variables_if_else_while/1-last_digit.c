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
	int n, lazt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lazt = n % 10;

	printf("Last digit of %d is %d ", n, lazt);
/* my code is here */
	if (lazt > 5)
	{
		printf("greater than 5\n");
	}
	else if (lazt == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
