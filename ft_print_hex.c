/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:57:53 by gsampaio          #+#    #+#             */
/*   Updated: 2024/12/03 03:00:34 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int n, int uppercase)
{
	char		*hex_str;
	int			len;

	hex_str = ft_itoa_baste(n, 16, uppercase);
	if (!hex_str)
		return (0);
	len = ft_print_string(hex_str);
	free(hex_str);
	return (len);
}
