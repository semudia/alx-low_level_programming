#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out all the alphabets except q and e
 * Return: 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		if (alphabets == 'e' || alphabets == 'q')
		{
			continue;
		}
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
