#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char letters;

	letters = 'a';
	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
