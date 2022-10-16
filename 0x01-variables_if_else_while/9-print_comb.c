#include <stdio.h>

/**
 * main - prints all combination of single digits
 * Return: 0 success, non zero error
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == 9)
		{
		break;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
	}
