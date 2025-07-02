/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory, int c, size_t num_bytes)
{
	const unsigned char	*memory_ptr;
	unsigned char		target;

	memory_ptr = memory;
	target = c;
	while (num_bytes--)
	{
		if (*memory_ptr == target)
			return ((void *)memory_ptr);
		memory_ptr++;
	}
	return (NULL);
}
