#include <stdio.h>
/**
 * main - Print all triplee digit numbers with comma and space
 * Return: 0
 */

int main(void)
{
int first;
int second;
int third;

for (first = 48; first < 58; first++)
{
for (second = 48; second < 58; second++)
{
if (second > first)
{
for (third = 48; third < 58; third++)
{
if (third > second)
{
putchar(first);
putchar(second);
putchar(third);
if (first == 55 && second == 56 && third == 57)
{
break;
}
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
