#include <stdio.h>
/**
 * main - Print all single digit numbers
 * Return: 0
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit);
	putchar('\n');
	return (0);
}
