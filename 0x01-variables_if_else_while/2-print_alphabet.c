#include <stdio.h>

/**
 * main - Entry point
 *
 * this function is used to print a - z.
 * and on this code I used for loop and putchar
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;
	char  b = "\n';

	for (i = 'a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	putchar(b);
	return (0);
}
