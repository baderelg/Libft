/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memory1, const void *memory2, size_t num_bytes)
{
	const unsigned char	*memory1_ptr;
	const unsigned char	*memory2_ptr;

	memory1_ptr = memory1;
	memory2_ptr = memory2;
	while (num_bytes--)
	{
		if (*memory1_ptr != *memory2_ptr)
			return (*memory1_ptr - *memory2_ptr);
		memory1_ptr++;
		memory2_ptr++;
	}
	return (0);
}
