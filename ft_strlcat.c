/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 19:42:21 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/24 18:26:57 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (dst[len] && len < dstsize)
		len++;
	i = len;
	while (src[len - i] && (len + 1) < dstsize)
	{
		dst[len] = src[len - i];
		len++;
	}
	if (i < dstsize)
		dst[len] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst[] = "My name is Mario";
	char src[] = ", Super Mario";
	int n = 7; 

	printf("original strlcat = %s\n", strlcat(dst, src, n));
//	printf("mine strlcat = %s\n", ft_strlcat(dst, src, n));	
	return (0);
}*/
