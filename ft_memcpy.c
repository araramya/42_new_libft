/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:30:20 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 18:25:37 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_cpy;
	char		*src_cpy;
	size_t		i;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	i = 0;
	while (i < n)
	{
		dest_cpy[i] = src_cpy[i];
	}
	return (dest);
}
