#include <stdio.h>

/**
 * main - prints numbers from 0 to 9 and letters a to f
 * Return: 0(Worked)
 */
int main(void)
{
	int i;
	
	for (i = 48; i< 58; i++)
	{
		putchr(i);
	}
	putchar('\n');
	return (0);
}
