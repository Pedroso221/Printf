/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_specifier.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <gsampaio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:47:37 by gsampaio          #+#    #+#             */
/*   Updated: 2025/02/05 04:20:57 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_specifier(char specifier, va_list args)
{
	if (specifier == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (specifier == 's')
		return (ft_print_string(va_arg(args, char *)));
	if (specifier == 'd' || specifier == 'i')
		return (ft_print_integer(va_arg(args, int)));
	if (specifier == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	if (specifier == 'x' || specifier == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), specifier == 'X'));
	if (specifier == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	if (specifier == '%')
	{
		(write(1, "%", 1));
		return (1);
	}
	return (0);
}
