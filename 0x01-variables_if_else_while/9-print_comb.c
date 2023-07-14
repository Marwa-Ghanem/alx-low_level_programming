#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using for loop to print numbers of base 16
 *
 * Return: Always (0)
*/

int main(void)
{
	int a;

	for (a = 0 ; a < 9 ; a++)
	{
	putchar('0' + a);
	putchar(',');
	putchar(' ');
	}
	putchar('9');
	return (0);
}
