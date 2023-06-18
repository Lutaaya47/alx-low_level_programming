#include <stdio.h>
/**
 * main - prints the alphabet
 *
 * Return: 0(Worked)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	puchar('\n')
	return (0);
}
