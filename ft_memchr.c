/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:53:52 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 18:18:58 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_cpy;
	unsigned char	c_cpy;
	size_t			i;

	s_cpy = (unsigned char *)s;
	c_cpy = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (s_cpy[i] == c_cpy)
			return ((void *)(s_cpy + i));
		i++;
	}
	return (NULL);
}
