/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:59:57 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/04 12:00:05 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 10)
	{
		i += ft_print_unsigned(nb / 10);
		i += ft_print_unsigned(nb % 10);
	}
	else
	{
		i += ft_print_char(nb + 48);
	}
	return (i);
}
