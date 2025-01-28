
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *last_elem;

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
