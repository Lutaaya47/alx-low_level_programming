#include  <stdio.h>

/**
 * main - prints lowercase alphabet in reverse
 * followed by a new line
 * Return: 0(Worked)
 */
int main(void)
{
	char ch;
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putcchar(ch);
	}
	putchar('\n')
	return (0);
}
