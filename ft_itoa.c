/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:16:46 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 17:18:14 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		len++;
		num *= -1;
	}
	if (num == 0)
		len++;
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;
	int		i;
	long	num;

	num = n;
	length = ft_len(num);
	str = (char *)malloc(sizeof(char) * length + 1);
	if (!str)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		str[i] = '-';
		num *= -1;
	}
	i = length - 1;
	if (num == 0)
		str[i] = '0';
	while (num > 0)
	{
		str[i--] = num % 10 + 48;
		num /= 10;
	}
	str[length] = '\0';
	return (str);
}
