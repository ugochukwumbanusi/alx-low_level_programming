#include "main.h"

/**
 * _isupper - test if it's uppercase letters
 * @c: char to test
 * Return: return 1 if it's uppercase, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	return (0);
}
