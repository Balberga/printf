/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:46:55 by balberga          #+#    #+#             */
/*   Updated: 2024/09/13 18:49:51 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_unsigned(unsigned int n, int *count)
{
	if (n > 9)
		ft_print_unsigned(n / 10, count);
	ft_print_char((n % 10) + '0', count);
}
