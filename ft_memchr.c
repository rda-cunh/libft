/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:29:19 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/11/08 00:06:14 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*alts;
	size_t			i;

	alts = (unsigned char *)s;
	i = 0;
	while (n > i)
	{
		if (alts[i] == (unsigned char)c)
			return (&alts[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
        char s1[] = "abcdef";
        int c = 'c'; 
		size_t n = 6;
	
	printf("my function = %p\n", ft_memchr(s1, c, n));   
	printf("original function = %p\n", memchr(s1, c, n));     
    return (0);
}*/