/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:34:34 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/20 19:39:35 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dtemp;
	unsigned char	*stemp;

	dtemp = (unsigned char *)dst;
	stemp = (unsigned char *)src;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		while (len--)
			dtemp[len] = stemp[len];
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char	src[] = "Test string.";
	char	dst1[50];
	char	dst2[50];

	ft_memmove(dst1, src, strlen(src) + 1);
	memmove(dst2, src, strlen(src) + 1);

	printf("Source string: %s\n", src);
	printf("Destiny string using ft_memmove: %s\n", dst1);
	printf("Destiny string using memmove: %s\n", dst2);
	return(0);
}*/
