/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 12:29:07 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/06 15:50:16 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (!little[j + 1])
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	const char *text = "helloworld";
	const char *search="world";
	char *res= ft_strnstr(text,search,10);
	if (res)
		printf("found :%s",res);
	else
		printf("not found");
}*/
