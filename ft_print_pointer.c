/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 05:13:52 by gsampaio          #+#    #+#             */
/*   Updated: 2024/12/03 03:01:39 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	unsigned long	addr;
	char			*ptr_str;
	int				len;	

	if (!ptr)
		return (ft_print_string("(nil)"));
	addr = (unsigned long)ptr;
	ptr_str = ft_itoa_base(addr, 16, 0);
	if (!ptr_str)
		return (0);
	len = ft_print_string("0x");
	len += ft_print_string(ptr_str);
	free(ptr_str);
	return (len);
}
