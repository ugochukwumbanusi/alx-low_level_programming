#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'print alphabets in reverse
 * Return: Always
 */
int main(void)
{
	int n = 122;

	while (n  >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
