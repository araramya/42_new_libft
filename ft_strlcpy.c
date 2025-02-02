/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:33:12 by aaramyan          #+#    #+#             */
/*   Updated: 2025/02/02 15:22:58 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len + 1 < dest_size)
	{
		ft_memcpy(dest, src, src_len + 1);
	}
	else if (dest_size != 0)
	{
		ft_memcpy(dest, src, dest_size - 1);
		dest[dest_size - 1] = '\0';
	}
	return (src_len);
}
