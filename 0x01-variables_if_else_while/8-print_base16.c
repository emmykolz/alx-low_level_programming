#include <stdio.h>

/**
 * main - this is for alphabets in base 16
 * Return: 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		putchar(digit % 10 + '0');
	
	char letter;

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);	}
	
	putchar('\n');

	return (0);
}
