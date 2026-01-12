/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 13:50:31 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/06 14:57:38 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	j;
	char	*d;

	len = ft_strlen(s);
	d = malloc(len + 1);
	if (!d)
		return (NULL);
	j = 0;
	while (j < len)
	{
		d[j] = s[j];
		j++;
	}
	d[j] = '\0';
	return (d);
}
/*
int main()
{
	char *s="hella belzanwa";
	char *d=ft_strdup(s);
	printf("%s",s);
	printf("%s",d);
}*/
