/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:58:49 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/04 11:58:59 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *ptr)
{
	int				i;
	unsigned long	container;

	i = 0;
	if (!ptr)
	{
		i += ft_print_str("(nil)");
		return (i);
	}
	container = (unsigned long) ptr;
	i += ft_print_str("0x");
	i += ft_print_hex((unsigned long)container, 0);
	return (i);
}
