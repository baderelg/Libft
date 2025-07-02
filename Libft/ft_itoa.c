/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nbr_len(long number)
{
	int	len;

	len = 0;
	if (number == 0)
		return (1);
	else if (number < 0)
	{
		number = -number;
		len++;
	}
	while (number > 0)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	number;
	char	*result;
	int		len;

	number = n;
	len = get_nbr_len(number);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (number == 0)
		result[0] = '0';
	else if (number < 0)
	{
		result[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		result[--len] = number % 10 + '0';
		number /= 10;
	}
	return (result);
}
