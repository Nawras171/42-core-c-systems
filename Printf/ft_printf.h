/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 12:01:13 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/04 12:01:21 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_print_char(char c);
int	ft_print_str(char *str);
int	ft_print_hex(unsigned long nb, int iscap);
int	ft_print_ptr(void *ptr);
int	ft_print_nbr(int nb);
int	ft_print_unsigned(unsigned int nb);
int	ft_printf(const char *format, ...);

#endif
