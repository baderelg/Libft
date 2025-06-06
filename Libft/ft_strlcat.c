/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = dst_len;
	if (dst_len >= size)
		return (size + src_len);
	while (*src && i < size - 1)
		dst[i++] = *(src++);
	dst[i] = '\0';
	return (dst_len + src_len);
}
