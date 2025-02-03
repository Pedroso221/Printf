/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:40:33 by gsampaio          #+#    #+#             */
/*   Updated: 2024/12/03 21:09:52 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	fill_buffer(char *buffer, unsigned long n, int base, int uppercase)
{
	char	*digits;
	int		len;

	if (uppercase)
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	len = 0;
	if (n == 0)
		buffer[len++] = '0';
	while (n)
	{
		buffer[len++] = digits[n % base];
		n /= base;
	}
	return (len);
}

char	*ft_itoa_base(unsigned long n, int base, int uppercase)
{
	char	buffer[17];
	char	*result;
	int		len;
	int		i;

	len = fill_buffer(buffer, n, base, uppercase);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	i = 0;
	while (len--)
		result[i++] = buffer[len];
	return (result);
}
