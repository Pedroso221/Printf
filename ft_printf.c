/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:43:38 by gsampaio          #+#    #+#             */
/*   Updated: 2024/12/03 20:53:00 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_specifier(char specifier, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
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
/*
#include <stdio.h>

int	main(void)
{
	char			a;
	char			*str;
	char			*str2;
	int				i;
	unsigned int	hex;

	a = 'a';
	str = "ugdygd";
	str2 = "10";
	i = -42174612;
	hex = 4294967286;  // Equivalente a -10 em unsigned

	// %c
	write(1, "ft_c\n", 5);
	printf("%d\n", printf("%c\n", a));
	printf("%d\n", ft_printf("%c\n", a));
	printf("\n\n");

	// %s
	write(1, "ft_s\n", 5);
	printf("%d\n", printf("%s\n", str));
	printf("%d\n", ft_printf("%s\n", str));
	printf("\n\n");

	// %p
	write(1, "ft_p\n", 5);
	printf("%d\n", printf("%p\n", (void *)str2));
	printf("%d\n", ft_printf("%p\n", (void *)str2));
	printf("\n\n");

	// %d
	write(1, "ft_d\n", 5);
	printf("%d\n", printf("%d\n", i));
	printf("%d\n", ft_printf("%d\n", i));
	printf("\n\n");

	// %x
	write(1, "ft_x\n", 5);
	printf("%d\n", printf("%x\n", hex));
	printf("%d\n", ft_printf("%x\n", hex));
	printf("\n\n");

	// %X
	write(1, "ft_X\n", 5);
	printf("%d\n", printf("%X\n", hex));
	printf("%d\n", ft_printf("%X\n", hex));
	printf("\n\n");

	// %%
	write(1, "ft_percent\n", 12);
	printf("%d\n", printf("%%\n"));
	printf("%d\n", ft_printf("%%\n"));
	printf("\n\n");

	return (0);
}
*/