#include "ft_printf.h"

int print_char(char c)
{
    return (write(1, &c, 1));
}
int print_string(char *str)
{
    int len = 0;

    if (!str)
        str = "(null)";
    while (str[len])
    {
        write(1, &str[len], 1);
        len++;
    }
    return (len);
}
int print_integer(int n)
{
    char *num_str = ft_itoa(n);
    int len = print_string(num_str);
    free(num_str);
    return (len);
}
int print_unsigned(unsigned int n)
{
    char *num_str = ft_utoa(n);
    int len = print_string(num_str);
    free(num_str);
    return (len);
}
int print_hex(unsigned int n, int uppercase)
{
    char *hex_str = ft_itoa_base(n, 16, uppercase);
    int len = print_string(hex_str);
    free(hex_str);
    return (len);
}
int print_pointer(void *ptr)
{
    unsigned long addr = (unsigned long)ptr;
    char *ptr_str = ft_itoa_base(addr, 16, 0);
    int len = print_string("0x") + print_string(ptr_str);
    free(ptr_str);
    return (len);
}