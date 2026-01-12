/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:06:05 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/09 14:12:14 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*arr;
	size_t	i;
	size_t	j;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	arr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!arr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		arr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		arr[i + j] = s2[j];
		j++;
	}
	arr[j + i] = '\0';
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	char *s1 = "omar";
	char *s2 = "dalgamoni";
	char *res = ft_strjoin(s1 ,s2);
	printf("%s" , res);
}*/
