#include "main.h"
#include <stdio.h>

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Capitalize on come\nhello wrld! 0123456\thello world.\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
