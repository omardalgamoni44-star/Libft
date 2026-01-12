/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:22:42 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/11 11:23:22 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main()
{
        const char *text = "you should go go to jordan";
        char *res = ft_strrchr(text ,'g');

        if (res)
        {
                printf("%s",res);
        }
        else
                printf("not found");
}*/
