#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

// Função principal
int ft_printf(const char *format, ...);

// Funções auxiliares
int handle_specifier(char specifier, va_list args);
int print_char(char c);
int print_string(char *str);
int print_integer(int n);
int print_unsigned(unsigned int n);
int print_hex(unsigned int n, int uppercase);
int print_pointer(void *ptr);
char *ft_itoa(int n);
char *ft_utoa(unsigned int n);
char *ft_itoa_base(unsigned long n, int base, int uppercase);

#endif