/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:58:31 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/04 11:58:37 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		i += ft_print_char('-');
		i += ft_print_char('2');
		i += ft_print_nbr(147483648);
	}
	else if (nb < 0)
	{
		i += ft_print_char('-');
		nb = -nb;
		i += ft_print_nbr(nb);
	}
	else if (nb >= 10)
	{
		i += ft_print_nbr(nb / 10);
		i += ft_print_nbr(nb % 10);
	}
	else
		i += ft_print_char(nb + '0');
	return (i);
}
