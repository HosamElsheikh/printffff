#include "main.h"

/**
 * handlechar - prints character when the placeholder is c
 * Return: number of characters
 * @args: The array fed for it
 */
int handlechar(va_list args)
{
	char c = va_arg(args, int);


	return (write(1, &c, 1));
}
