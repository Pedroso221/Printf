/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:40:46 by gsampaio          #+#    #+#             */
/*   Updated: 2024/12/03 21:12:23 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int     count_ch(int n);

char	*ft_itoa(int n)
{
	char			*str;
	unsigned long	num;
	int				len;

	num = n;
	len = count_ch(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	while (len-- > (str[0] == '-'))
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}

int	count_ch(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len = 1;
	while (n)
	{
		n /= 10;
		len ++;
	}
	return (len);
}
