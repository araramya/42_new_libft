/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 16:02:32 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 16:04:42 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*z_arr;

	z_arr = (void *)malloc(count * size);
	if (!z_arr)
		return (NULL);
	ft_memset(z_arr, 0, count * size);
	return (z_arr);
}
