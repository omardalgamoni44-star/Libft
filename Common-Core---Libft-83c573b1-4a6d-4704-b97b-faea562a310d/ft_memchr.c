/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 15:12:04 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/06 15:54:21 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*arr;
	unsigned char		t;
	size_t				i;

	arr = (const unsigned char *)s;
	t = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (arr[i] == t)
		{
			return ((void *)&arr[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s="welcome to";
	char  *res = ft_memchr(s,'t',10);
	printf("%d",res);
}*/
