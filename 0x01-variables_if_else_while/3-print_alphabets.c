#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
