#include "ft_printf.h"

char *ft_utoa(unsigned int n)
{
    char *str;
    unsigned int num = n;
    int len = (num == 0) ? 1 : 0;

    while (n)
    {
        n /= 10;
        len++;
    }
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    while (len--)
    {
        str[len] = num % 10 + '0';
        num /= 10;
    }
    return (str);
}