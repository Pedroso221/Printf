/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:51:19 by gsampaio          #+#    #+#             */
/*   Updated: 2024/12/03 02:53:18 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_integer(int n)
{
	char		*num_str;
	int			len;

	num_str = ft_itoa(n);
	len = ft_print_string(num_str);
	free(num_str);
	return (len);
}
