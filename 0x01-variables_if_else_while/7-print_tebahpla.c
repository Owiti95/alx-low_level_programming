#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - mein block
 * Description: print all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
