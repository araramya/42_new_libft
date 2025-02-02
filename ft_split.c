/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:45:31 by aaramyan          #+#    #+#             */
/*   Updated: 2025/02/02 17:40:06 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static int	ft_word_length(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	free_all(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

static char	**ft_helper(char const *s, char c, char **result, int words_count)
{
	int	i;
	int	j;
	int	word_len;

	i = 0;
	while (i < words_count)
	{
		while (*s == c)
			s++;
		word_len = ft_word_length(s, c);
		result[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!result[i])
		{
			free_all(result, i - 1);
			return (NULL);
		}
		j = 0;
		while (j < word_len)
			result[i][j++] = *s++;
		result[i][j] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		wcount;

	if (!s)
		return (NULL);
	wcount = ft_word_count(s, c);
	result = (char **)malloc(sizeof(char *) * (wcount + 1));
	if (!result)
		return (NULL);
	return (ft_helper(s, c, result, wcount));
}
