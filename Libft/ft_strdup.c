/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 12:03:00 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/03 12:18:45 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	len;

	len = ft_strlen(src);
	copy = malloc(len + 1);
	if (!copy)
		return (NULL);
	ft_strlcpy(copy, src, len + 1);
	return (copy);
}
