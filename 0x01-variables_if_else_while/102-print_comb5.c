#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0
 */
int main(void)
{
	int set_a;

	for (set_a = 0; set_a < 99; set_a++)
	{
		int set_b;

		for (set_b = set_a + 1; set_b < 100; set_b++)
		{
			putchar((set_a / 10) + '0');
			putchar((set_a % 10) + '0');
			putchar(' ');
			putchar((set_b / 10) + '0');
			putchar((set_b % 10) + '0');

			if (set_a != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
