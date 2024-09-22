/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:11:10 by balberga          #+#    #+#             */
/*   Updated: 2024/09/13 23:50:30 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_hex(unsigned long long n, int is_uppercase, int *count)
{
	char	*base;

	if (is_uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		ft_print_hex(n / 16, is_uppercase, count);
	ft_print_char(base[n % 16], count);
}
