#include "main.h"

/**
 * __isalpha - checks if character is  letter
 *            both lowercase or uppercase
 *
 *@c: takes input from other Functions.
 *
 * Return: 1 is c if true else 0
*/

int __isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

