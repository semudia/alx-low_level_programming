#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char alphabets;

	alphabets = 'z';
	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
