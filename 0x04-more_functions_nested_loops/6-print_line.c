#include "main.h"

/**
 * print_line - function that prints '_' n times if n is positive
 *		, prints '\n' if n is 0 or negative
 *
 *@n: takes integer input
*/

void print_line(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
		putchar('\n');
	}
}
