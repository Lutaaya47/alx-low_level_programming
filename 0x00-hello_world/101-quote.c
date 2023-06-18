#include <unistd.h>

/**
 * main - A program that has the ability to print a line to the standard error
 * Return 1 (Worked and so there is an error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
