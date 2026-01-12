/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:03:19 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/08 19:17:12 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nnode;

	if (!lst || !f || !del)
		return (NULL);
	nlst = NULL;
	while (lst)
	{
		nnode = ft_lstnew(f(lst -> content));
		if (!nnode)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nnode);
		lst = lst -> next;
	}
	return (nlst);
}
