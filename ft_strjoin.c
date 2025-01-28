/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:41:55 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 16:42:53 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*join_str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	join_str = malloc(sizeof(*s1) * len + 1);
	if (!join_str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		join_str[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		join_str[i++] = s2[j++];
	}
	join_str[i] = '\0';
	return (join_str);
}
