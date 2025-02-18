#include <stdio.h>

/**
 * main - Prints single-digit numbers from 0 to 9
 *
 * Description: Uses a while loop to print numbers from 0 to 9,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}

