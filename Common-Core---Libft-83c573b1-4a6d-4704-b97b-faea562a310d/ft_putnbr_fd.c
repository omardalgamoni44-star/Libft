/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 19:06:04 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/07 12:17:34 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	put_char(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	char	c;

	num = n;
	if (num < 0)
	{
		put_char('-', fd);
		num = -num;
	}
	if (num >= 10)
	{
		ft_putnbr_fd(num / 10, fd);
	}
	c = num % 10 + '0';
	put_char(c, fd);
}
/*
int main()
{
	ft_putnbr_fd(345,1);
}
*/
