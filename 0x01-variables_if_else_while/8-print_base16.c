#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the hexa decimal in lowercase,
 * description :prints "prints the hexadecimal lowercase,"
 * Return: 0
 */
int main(void)
{
	int num;

	char xaraf;

	for (num = 0; num < 10; num++)
		putchar(num + '0');
	for (xaraf = 'a'; xaraf <= 'f'; xaraf++)
		putchar(xaraf);
	putchar('\n');
	return (0);
}
