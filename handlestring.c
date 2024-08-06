#include "main.h"

/**
 * handlestring - handles the string
 * Return: number of characters printed
 * @args: The argument to print
 */
int handlestring(va_list args)
{
	int i = 0;
	int length = 0;

	char *str = va_arg(args, char *);

	if (!str)
	{
		str = "(null)";
	}
	while (str[i])
	{
		length++;
	}
	return (write(1, str, length));
}
