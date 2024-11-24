#include "ft_printf.h"
char *ft_itoa(int n)
{
    char *str;
    long num = n;
    int len = (num <= 0) ? 1 : 0;

    while (n)
    {
        n /= 10;
        len++;
    }
    str = malloc(len + 1);
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (num < 0)
        str[0] = '-', num = -num;
    while (len-- > (str[0] == '-'))
    {
        str[len] = num % 10 + '0';
        num /= 10;
    }
    return (str);
}