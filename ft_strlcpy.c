/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:33:12 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 18:26:11 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t dest_size)
{
	size_t	src_len;
	size_t	i;

	if (!dest || !src)
		return (0);
	src_len = 0;
	i = 0;
	while (src[i])
		src_len++;
	if (dest_size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < dest_size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
