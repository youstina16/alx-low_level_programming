#include <stdio.h>

/**
 * main - program that prints all possible different combinations of two digits
 *
 * Return: Always success
 */
int main(void)
{
	int x, e;

	for (x = '0'; x <= '9'; x++)
	{
		for (e = '0'; e <= '9'; e++)
		{
			if (x < e)
			{
				putchar(x);
				putchar(e);
				if (x != '8' || (x == '8' && e != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
