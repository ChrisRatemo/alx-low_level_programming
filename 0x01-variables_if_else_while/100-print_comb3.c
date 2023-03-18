#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0 on success
 */

int main(void)
{
	int a = 0, b = 8, a1 = 1, b2 = 9;

	while (a <= b)
	{
		a1 = a + 1;

		while (a1 <= b2)
		{
			putchar(a + '0');
			putchar(a1 + '0');
			a1++;

			if (a != b)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
