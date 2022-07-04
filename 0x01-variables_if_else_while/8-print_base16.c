#include <stdio.h>

/**
 * main - this is for alphabets in base 16
 * Return: 0
 */
int main(void)
{
	int digit;
	char letter;

	for (digit = 0; digit < 10; digit++)
		putchar(digit % 10 + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);	}
	
	putchar('\n');

	return (0);
}
