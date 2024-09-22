/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:42:57 by balberga          #+#    #+#             */
/*   Updated: 2024/09/13 23:49:17 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_handle_conversion(const char *format, va_list args,
		int *count)
{
	if (*format == 'c')
		ft_print_char(va_arg(args, int), count);
	else if (*format == 's')
		ft_print_string(va_arg(args, char *), count);
	else if (*format == 'p')
		ft_print_pointer(va_arg(args, void *), count);
	else if (*format == 'd' || *format == 'i')
		ft_print_decimal(va_arg(args, int), count);
	else if (*format == 'u')
		ft_print_unsigned(va_arg(args, unsigned int), count);
	else if (*format == 'x')
		ft_print_hex(va_arg(args, unsigned int), 0, count);
	else if (*format == 'X')
		ft_print_hex(va_arg(args, unsigned int), 1, count);
	else if (*format == '%')
		ft_print_percent(count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			ft_handle_conversion(&format[i], args, &count);
		}
		else
			ft_print_char(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
