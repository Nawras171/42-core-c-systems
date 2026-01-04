/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 11:59:10 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/04 11:59:19 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_print_str(char *str)
{
	int	len;
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	len = 0;
	while (str[len])
	{
		len++;
		i++;
	}
	write(1, str, len);
	return (i);
}
