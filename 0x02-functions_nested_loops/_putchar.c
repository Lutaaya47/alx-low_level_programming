#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On succss 1
 * On error: -1 is returned and mistake is corrected
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
