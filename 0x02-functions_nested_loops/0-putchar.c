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

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(arr[i]);
	_putchar('\n');
	return (0);
}

