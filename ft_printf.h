/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:09:21 by balberga          #+#    #+#             */
/*   Updated: 2024/09/13 23:47:26 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *format, ...);
void	ft_print_char(char c, int *count);
void	ft_print_string(char *str, int *count);
void	ft_print_pointer(void *ptr, int *count);
void	ft_print_decimal(int n, int *count);
void	ft_print_unsigned(unsigned int n, int *count);
void	ft_print_hex(unsigned long long n, int is_uppercase, int *count);
void	ft_print_percent(int *count);

#endif
