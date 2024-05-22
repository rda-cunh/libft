/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 13:57:10 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/08 01:02:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
        char s1[] = "abcdef";
        char s2[] = "abc\375xx";
	int n = 6;
	
	printf("my function = %d\n", ft_strncmp(s1, s2, n));   
	printf("original function = %d\n", strncmp(s1, s2, n));     
         return (0);
}*/
