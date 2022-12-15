#include "main.h"

/**
 * _isdigit - Checks if numbers is between 0 to 9
 * @c: Input number
 * Return: 1 if its a number(0 - 9), 0 in other case
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
