/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:59:55 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 16:01:01 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*str;
	char		*to_find;

	str = (char *)haystack;
	to_find = (char *)needle;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] && i < len)
	{
		j = 0;
		while (to_find[j] == str[i + j] && i + j < len)
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
