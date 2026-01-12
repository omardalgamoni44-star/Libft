/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:13:20 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/04 13:56:21 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}
/*
int main()
{
	t_list *head = NULL;

	t_list *a = ft_lstnew("A");
	t_list *b = ft_lstnew("B");
	t_list *c = ft_lstnew("C");

	head = a;
	a -> next = b;
	b -> next = c;
	printf("%d",ft_lstsize(head));
}
*/
