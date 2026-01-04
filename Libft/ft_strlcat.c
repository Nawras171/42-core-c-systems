/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:34:57 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/03 12:23:31 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t				dst_len;
	size_t				remain;
	char				*dst;
	const char			*src_start;

	dst = dest;
	src_start = src;
	remain = size;
	while (remain-- != 0 && *dst != '\0')
		dst++;
	dst_len = dst - dest;
	remain = size - dst_len;
	if (remain == 0)
		return (dst_len + ft_strlen(src));
	while (*src != '\0')
	{
		if (remain > 1)
		{
			*dst++ = *src;
			remain--;
		}
		src++;
	}
	*dst = '\0';
	return (dst_len + (src - src_start));
}
