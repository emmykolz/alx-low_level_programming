#include <stdio.h>
/**
 * main - Print all single digit numbers with comma and space
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit % 10 + '0');
	if (digit < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');
	return (0);
}
