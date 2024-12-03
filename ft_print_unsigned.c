/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 02:47:53 by gsampaio          #+#    #+#             */
/*   Updated: 2024/12/03 04:15:32 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	char		*num_str;
	int			len;

	num_str = ft_utoa(n);
	len = print_string(num_str);
	free(num_str);
	return (len);
}
