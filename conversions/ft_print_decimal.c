/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:01:28 by balberga          #+#    #+#             */
/*   Updated: 2024/09/13 17:19:36 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_decimal(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	if (n < 0)
	{
		ft_print_char('-', count);
		n = -n;
	}
	if (n > 9)
		ft_print_decimal(n / 10, count);
	ft_print_char((n % 10) + '0', count);
}
