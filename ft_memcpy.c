/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:34:34 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/20 19:23:41 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char	*dtemp;
	unsigned char	*stemp;

	dtemp = (unsigned char *)dst;
	stemp = (unsigned char *)src;
	if (!dtemp && !stemp)
		return (dst);
	while (len > 0)
	{
		*dtemp = *stemp;
		dtemp++;
		stemp++;
		len--;
	}
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char	src[] = "Test string.";
	char	dst1[50];
	char	dst2[50];

	ft_memcpy(dst1, src, strlen(src) + 1);
	memcpy(dst2, src, strlen(src) + 1);

	printf("Source string: %s\n", src);
	printf("Destiny string using ft_memcpy: %s\n", dst1);
	printf("Destiny string using memcpy: %s\n", dst2);
	return(0);
}*/
