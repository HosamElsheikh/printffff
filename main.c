#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

    len = printf("Let's try to printf a simple sentence.\n");
    len2 = _printf("Let's try to printf a simple sentence.\n");
	    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
	return (0);
}