#include "main.h"

/**
 * get_function - This gets the function that we will use on placeholders
 * @c: The character
 * @args: The list of arguments
 * Return: The number of characters
 */
int get_function(char c, va_list args)
{
	int i = 0;
	int count = 0;

	specifiers_t  spec[] = {
		{'c', handlechar},
		{'s', handlestring},
	};
	while (spec[i].specifiers)
	{
		if (c == spec[i].specifiers)
		{
			count += spec[i].f(args);
		}
		i++;
	}
	if (count == 0)
	{
		count += _putchar('%');
	}
	return (count);
}
