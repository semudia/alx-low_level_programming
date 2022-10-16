#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints all possible different combinations of three digits
 * Return: 0
 */
int main(void)
{
	int hundreds;

	for (hundreds = 0; hundreds < 8; hundreds++)
	{
		int tens;

		for (tens = hundreds + 1; tens < 9; tens++)
		{
			int unit;

			for (unit = tens + 1; unit < 10; unit++)
			{
				putchar((hundreds % 10) + '0');
				putchar((tens) + '0');
				putchar((unit % 10) + '0');
				if (hundreds != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
