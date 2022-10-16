#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int units;

	for (units = 0; units < 10; units++)
	{
		putchar((units % 10) + '0');
		if (units != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
