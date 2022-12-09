#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all singled digit numbers of base10 starting from 0,
 * followed by a new line.
 * Return: 0.
 */

int main(void)
{
	int c;

	for (c = 0; c < 10; ++c)
	{
		putchar(48 + c);
		if (c < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
