/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num_bytes)
{
	unsigned char	ch1;
	unsigned char	ch2;

	while ((*s1 || *s2) && num_bytes-- > 0)
	{
		ch1 = (unsigned char)*s1++;
		ch2 = (unsigned char)*s2++;
		if (ch1 != ch2)
			return (ch1 - ch2);
	}
	return (0);
}
