/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:09:16 by aaramyan          #+#    #+#             */
/*   Updated: 2025/02/02 18:09:44 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*string_cpy;
	unsigned char	c_cpy;
	int				i;

	i = 0;
	string_cpy = (char *)s;
	c_cpy = (unsigned char)c;
	while (*string_cpy != '\0')
	{
		string_cpy++;
		i++;
	}
	while (i >= 0)
	{
		if (*string_cpy == c_cpy)
			return (string_cpy);
		i--;
		string_cpy--;
	}
	return (NULL);
}
