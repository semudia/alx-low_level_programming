#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int tens;

	for(tens =0; tens < 9; tens++)
	{
		int units;

		for (units = tens + 1; units < 10; units++)
		{
			putchar((tens % 10) + '0');
			putchar((units % 10) + '0');
			if (tens != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
