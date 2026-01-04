/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 12:31:16 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/03 12:32:51 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			ptr_len;
	char			*p;

	if (!s)
		return (0);
	ptr_len = 0;
	while (start < ft_strlen(s) && (ptr_len < len && s[start + ptr_len]))
		ptr_len++;
	p = malloc(sizeof(char) * (ptr_len + 1));
	if (!p)
		return (0);
	i = 0;
	while (start < ft_strlen(s) && i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return ((char *)p);
}
