/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlasso <tlasso@afcrichmond.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 00:00:00 by tlasso          #+#    #+#             */
/*   Updated: 2025/05/18 00:00:00 by tlasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_split(char **words)
{
	int	i;

	i = 0;
	while (words[i])
		free(words[i++]);
	free(words);
	return (NULL);
}

static int	count_words(char const *str, char separator)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (str[i])
	{
		if (str[i] != separator && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == separator)
			in_word = 0;
		i++;
	}
	return (count);
}

static char	**extract_words(char **split, char const *str, char separator)
{
	int		i;
	int		start;
	char	**result;

	i = 0;
	result = split;
	while (str[i])
	{
		while (str[i] == separator)
			i++;
		if (str[i])
		{
			start = i;
			while (str[i] && str[i] != separator)
				i++;
			*split = ft_substr(str, start, i - start);
			if (!*split)
				return (free_split(result));
			split++;
		}
	}
	*split = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!split)
		return (NULL);
	return (extract_words(split, s, c));
}
