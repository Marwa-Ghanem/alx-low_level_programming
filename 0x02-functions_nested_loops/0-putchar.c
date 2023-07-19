#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always (0)
*/
int main(void)
{
	char arr[8] = "_putchar";
	int i;

	for (i = 0 ; i < 8 ; i++)
		_putchar(arr[i]);
	_putchar('\n');
	return (0);
}

