#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet in lowercase,
 * description :prints "prints the alphabet in lowercase,"
 * Return: 0
 */
int main(void)
{
	char xaraf;

	for (xaraf = 'a'; xaraf <= 'z'; xaraf++)
		putchar(xaraf);
	for (xaraf = 'A'; xaraf <= 'Z'; xaraf++)
		putchar(xaraf);
	putchar('\n');
	return (0);
}
