#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * Return: 0(Worked)
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (n = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n !=56; || m!= 57)
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
