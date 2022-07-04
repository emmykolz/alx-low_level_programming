#include <stdio.h>

/**
 * main - this is for reversed alphabets
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		--c;
	}
	putchar('\n');

	return (0);
}
