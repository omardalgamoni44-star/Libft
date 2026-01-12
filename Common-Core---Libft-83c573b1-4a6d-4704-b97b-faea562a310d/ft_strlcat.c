/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 11:19:28 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/09 13:37:51 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dl;
	size_t	sl;
	size_t	i;

	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	i = 0;
	if (size <= dl)
		return (size + sl);
	while (src[i] && (dl + i + 1) < size)
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}
/*
int main()
{
	char b[10] = "hikldfjttg";
	size_t n = ft_strlcat(b,"there",sizeof(b));
	printf("%s",b);
}
*/
