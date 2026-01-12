/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:27:37 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/06 18:59:10 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if (lst -> next == NULL)
			return (lst);
		lst = lst -> next;
	}
	return (lst);
}
/*
#include <stdio.h>
int main()
{
	t_list *a = ft_lstnew("A");
	t_list *b = ft_lstnew("B");
	t_list *c = ft_lstnew("y");

	a -> next = b;
	b -> next = c;	
	t_list *last = ft_lstlast(a);
	printf("%s",(char *) last -> content);

}
*/
