/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 19:45:04 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/06 18:04:04 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pt;
	size_t			i;

	i = 0;
	pt = (unsigned char *)s;
	while (i < n)
	{
		pt[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int main()
{
	char str[6] = "helleu";
	str[6] = '\0';
	ft_memset(str,'o',6);
	printf("%s",str);
}
*/
