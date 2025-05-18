/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *memory, size_t num_bytes)
{
	unsigned char	*byte_ptr;

	byte_ptr = (unsigned char *)memory;
	while (num_bytes--)
		*(byte_ptr++) = 0;
}
