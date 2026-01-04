/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:57:47 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/04 12:23:31 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb, int iscap)
{
	char	*base;
	int		count;

	count = 0;
	base = "0123456789abcdef";
	if (iscap)
		base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_print_hex(nb / 16, iscap);
		count += ft_print_hex(nb % 16, iscap);
	}
	else
		count += ft_print_char(base[nb]);
	return (count);
}
