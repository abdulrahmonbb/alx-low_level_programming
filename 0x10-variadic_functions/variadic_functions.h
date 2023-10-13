#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/* void print_all(const char * const format, ...);
void print_c(list, char *s);
void print_i(list, char *s);
void print_f(list, char *s);
void print_s(list, char *s);
*/

/**
 * struct typ - struct operators
 * @c: char
 * @tp: function associated
 */
typedef struct typ
{
	char *c;
	void (*tp)(va_list var);
} typ_t;

#endif
