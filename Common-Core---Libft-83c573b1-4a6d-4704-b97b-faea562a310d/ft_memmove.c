/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaldalgm <oaldalgm@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 13:47:52 by oaldalgm          #+#    #+#             */
/*   Updated: 2025/12/07 12:15:38 by oaldalgm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*a1;
	const unsigned char	*a2;
	size_t				i;

	a1 = (unsigned char *)dest;
	a2 = (const unsigned char *)src;
	i = 0;
	if (a1 < a2)
	{
		while (i < n)
		{
			a1[i] = a2[i];
			i++;
		}
	}
	else if (a1 > a2)
	{
		while (n > 0)
		{
			n--;
			a1[n] = a2[n];
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

void    *ft_memmove(void *flag1, const void *flag2, size_t n);

int main(void)
{
        char str1[20] = "Hello World!";
        char str2[20] = "ABCDEFGHIJK";

        // Test 1: Normal copy
        ft_memmove(str1, str2, 5);
        printf("Normal copy: %s\n", str1);

        // Test 2: Overlapping copy (destination > source)
        char overlap1[20] = "123456789";
        ft_memmove(overlap1 + 2, overlap1, 5);
        printf("Overlap forward: %s\n", overlap1);

        // Test 3: Overlapping copy (destination < source)
        char overlap2[20] = "abcdefghi";
        ft_memmove(overlap2, overlap2 + 2, 5);
        printf("Overlap backward: %s\n", overlap2);

        return 0;
}
*/
