/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 04:54:04 by gsampaio          #+#    #+#             */
/*   Updated: 2024/12/03 03:04:38 by gsampaio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_printf(const char *format, ...);
int			ft_print_char(char c);
int			ft_print_string(char *str);
int			ft_print_integer(int n);
int			ft_print_unsigned(unsigned int n);
int			ft_print_hex(unsigned int n, int uppercase);
int			ft_print_pointer(void *ptr);
char		*ft_itoa(int n);
char		*ft_utoa(unsigned int n);
char		*ft_itoa_base(unsigned long n, int base, int uppercase);

#endif
