/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 15:57:11 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/06 15:55:56 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last -> next = new;
}
/*
int main()
{
	t_list *head = NULL;

        t_list *a = ft_lstnew("A");
        t_list *b = ft_lstnew("B");
        t_list *c = ft_lstnew("y");

        ft_lstadd_back(&head,a);	       
       	ft_lstadd_back(&head,b);
 	ft_lstadd_back(&head,c);

        printf("%s",(char *) ft_lstlast(head) -> content);

}
*/
