/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*memory;
	size_t	total_bytes;

	if (nelem && elsize)
	{
		total_bytes = nelem * elsize;
		if (total_bytes / elsize != nelem)
			return (NULL);
	}
	else
		total_bytes = 0;
	memory = malloc(total_bytes);
	if (!memory)
		return (NULL);
	ft_bzero(memory, total_bytes);
	return (memory);
}
