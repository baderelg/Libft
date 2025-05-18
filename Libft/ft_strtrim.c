/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (ft_calloc(1, sizeof(char)));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, start, (end - start) + 1));
}
