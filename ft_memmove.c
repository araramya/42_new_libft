/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:31:45 by aaramyan          #+#    #+#             */
/*   Updated: 2025/02/02 15:50:13 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, void *src, size_t n)
{
	char	*dest_cpy;
	char	*src_cpy;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	dest_cpy = dest;
	src_cpy = src;
	i = 0;
	if (dest_cpy > src_cpy)
	{
		while (n-- > 0)
			dest_cpy[n] = src_cpy[n];
	}
	else
	{
		while (i < n)
		{
			dest_cpy[i] = src_cpy[i];
			i++;
		}
	}
	return (dest);
}
