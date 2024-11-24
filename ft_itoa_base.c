#include "ft_printf.h"
char *ft_itoa_base(unsigned long n, int base, int uppercase)
{
    char *digits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
    char buffer[17];
    char *result;
    int len = 0;

    if (n == 0)
        return (strdup("0"));
    while (n)
    {
        buffer[len++] = digits[n % base];
        n /= base;
    }
    result = malloc(len + 1);
    if (!result)
        return (NULL);
    result[len] = '\0';
    while (--len >= 0)
        result[len] = buffer[len];
    return (result);
}