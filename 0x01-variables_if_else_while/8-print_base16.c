#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enty point
 * Description: print all single digit number of base 10
 * starrting from 0, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
