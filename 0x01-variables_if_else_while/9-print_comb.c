#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0' ; n <=  '9' ; ++n)
{
	putchar(n);
	putchar('0' + n);
	if (n <= 8)
	putchar(' ');
	putchar(',');
}
	return (0);
}
