/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 17:23:09 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/09 13:43:04 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
static int	lennum(int n)
{
	unsigned int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*s;

	nb = n;
	len = lennum(nb);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	s[len] = '\0';
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		s[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (s);
}
/*
int main()
{
	int num = 8475953;
	char *s=ft_itoa(num);
	printf("%s",s);
}*/
