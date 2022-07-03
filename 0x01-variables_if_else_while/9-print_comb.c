#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the numbers with comma,
 * description :prints "prints the numbers with comma,"
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	putchar('\n');
	return (0);
}
