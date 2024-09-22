/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: balberga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 19:55:08 by balberga          #+#    #+#             */
/*   Updated: 2024/09/13 23:52:43 by balberga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_pointer(void *ptr, int *count)
{
	unsigned long long	address;

	if (ptr == NULL)
	{
		write(1, "(nil)", 5);
		*count += 5;
		return ;
	}
	address = (unsigned long long)ptr;
	write(1, "0x", 2);
	*count += 2;
	ft_print_hex(address, 0, count);
}
