#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>


/**
 * struct specifiers - to get the function from the character
 * @specifiers: The placeholder
 * @f: The function to which we point
 */
typedef struct specifiers
{
	char specifiers;
	int (*f)(va_list);
} specifiers_t;

/* functions used */
int _printf(const char *format, ...);
int get_function(char s, va_list args);
int _putchar(char c);
int handlestring(va_list args);
int handlechar(va_list args);



#endif
