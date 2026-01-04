/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naldalqa <naldalqa@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 12:33:56 by naldalqa          #+#    #+#             */
/*   Updated: 2026/01/03 12:35:33 by naldalqa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	scan(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (s1[i] != set[j])
			break ;
		i++;
	}
	return (i + 1);
}

static int	revscan(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1);
	while (i >= 0)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (s1[i] != set[j])
			break ;
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	start = scan(s1, set);
	end = revscan(s1, set);
	if (end - start + 1 < 0)
		return (ft_calloc(1, sizeof(char)));
	p = ft_substr(s1, start - 1, end - start + 1);
	if (!p)
		return (NULL);
	return (p);
}
