#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints the alphabet at lowercase in rev,
 * description :prints "prints the alphabet in lowercase in rev,"
 * Return: 0
 */
int main(void)
{
	char xaraf;

	for (xaraf = 'z'; xaraf >= 'a'; xaraf--)
		putchar(xaraf);
	putchar('\n');
	return (0);
}
