/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:13:25 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/17 19:26:15 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "Test string";
    char s2[] = "Test string";

    printf("Original string: %s\n", s1);
    
    ft_memset(s1, '$', 4);
    memset(s2, '$', 4);

    printf("Modified string using ft_memset: %s\n", s1);
    printf("Modified string using memset: %s\n", s2);

    return (0);
}*/
