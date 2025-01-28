/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaramyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 18:05:18 by aaramyan          #+#    #+#             */
/*   Updated: 2025/01/28 18:05:49 by aaramyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last_elem;

	if (lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			last_elem = ft_lstlast(*lst);
			last_elem->next = new;
		}
	}
}
