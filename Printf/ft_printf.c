/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 12:00:29 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/04 12:23:53 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_helper(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_print_hex(va_arg(args, unsigned long), 0));
	else if (c == 'X')
		return (ft_print_hex(va_arg(args, unsigned long), 1));
	else if (c == '%')
		return (ft_print_char('%'));
	else
	{
		ft_print_char('%');
		ft_print_char(c);
		return (2);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
			count += ft_helper(*(++format), args);
		else if (*format != '%')
			count += ft_print_char(*format);
		format++;
	}
	va_end(args);
	return (count);
}
