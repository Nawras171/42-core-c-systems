/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:34:01 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/03 12:24:26 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	srclen;
	size_t	copylen;

	srclen = ft_strlen(src);
	if (destsize)
	{
		if (srclen < destsize -1)
			copylen = srclen;
		else
			copylen = destsize - 1;
		ft_memcpy(dest, src, copylen);
		dest[copylen] = '\0';
	}
	return (srclen);
}
