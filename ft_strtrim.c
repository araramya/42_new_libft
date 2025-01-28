/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:43:28 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 16:45:14 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_is_in_str(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new;
	size_t	i;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_is_in_str(set, s1[start]))
		start++;
	while (end > start && ft_is_in_str(set, s1[end - 1]))
		end--;
	new = malloc(sizeof(char) * (end - start + 1));
	if (!new)
		return (NULL);
	while (start < end)
	{
		new[i++] = s1[start];
		++start;
	}
	new[i] = 0;
	return (new);
}
