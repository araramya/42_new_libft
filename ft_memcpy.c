/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:30:20 by aaramyan          #+#    #+#             */
/*   Updated: 2025/02/02 15:25:05 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dest_cpy;
	unsigned char		*src_cpy;

	if (!dest && !src)
	{
		return (NULL);
	}
	dest_cpy = (unsigned char *)dest;
	src_cpy = (unsigned char *)src;
	while (n > 0)
	{
		*(dest_cpy++) = *(src_cpy++);
		n--;
	}
	return (dest);
}
