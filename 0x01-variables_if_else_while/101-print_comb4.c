#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: always 0 (success)
 */
int main(void)
{
	int n, m, 1;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (1 = 50; 58 > 1; 1++)
			{
				if (1 > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(1);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
