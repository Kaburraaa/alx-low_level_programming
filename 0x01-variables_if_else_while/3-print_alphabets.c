#include <stdio.h>

/**
 * main - prints alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char lup;

	for (lup = 'a'; lup <= 'z'; lup++)
		putchar(lup);

	for (lup = 'A'; lup <= 'Z'; lup++)
		putchar(lup);

	putchar('\n');

	return (0);
}
