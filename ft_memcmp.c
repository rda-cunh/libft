/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 00:15:00 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/08 00:05:35 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*alts1;
	unsigned char	*alts2;
	size_t			i;

	alts1 = (unsigned char *)s1;
	alts2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (alts1[i] != alts2[i])
			return ((unsigned char) alts1[i] - (unsigned char) alts2[i]);
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
        char s2[] = "abc\375xx";
	int n = 6;
	
	printf("my function = %d\n", ft_memcmp(s1, s2, n));   
	printf("original function = %d\n", memcmp(s1, s2, n));     
         return (0);
}*/