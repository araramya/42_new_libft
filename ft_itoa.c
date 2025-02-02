/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:16:46 by aaramyan          #+#    #+#             */
/*   Updated: 2025/02/02 17:59:08 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libft.h"

static int	ft_len(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		len++;
		num /= 10;
	}
	return (len);
}

static void	ft_fill_str(char *str, long num, int length)
{
	int	i;

	str[length] = '\0';
	i = length - 1;
	if (num == 0)
		str[i] = '0';
	while (num > 0)
	{
		str[i--] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		length;
	char	*str;
	long	num;

	num = n;
	length = ft_len(n);
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	ft_fill_str(str, num, length);
	return (str);
}
