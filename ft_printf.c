#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        {
            format++;
            count += handle_specifier(*format, args);
        }
        else
        {
            write(1, format, 1);
            count++;
        }
        format++;
    }
    va_end(args);
    return (count);
}

int handle_specifier(char specifier, va_list args)
{
    if (specifier == 'c')
        return (print_char(va_arg(args, int)));
    if (specifier == 's')
        return (print_string(va_arg(args, char *)));
    if (specifier == 'd' || specifier == 'i')
        return (print_integer(va_arg(args, int)));
    if (specifier == 'u')
        return (print_unsigned(va_arg(args, unsigned int)));
    if (specifier == 'x' || specifier == 'X')
        return (print_hex(va_arg(args, unsigned int), specifier == 'X'));
    if (specifier == 'p')
        return (print_pointer(va_arg(args, void *)));
    if (specifier == '%')
        return (write(1, "%", 1));
    return (0);
}