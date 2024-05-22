/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:31:28 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/08 01:03:37 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] != '\0' && i + j < len)
		{
			++j;
			if (little[j] == '\0')
				return ((char *)&big[i]);
		}
		++i;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	big[] = "My name is Mario";
	char	little[] = "is";
	size_t	len = strlen(big);

	printf("ft_strstr = %s\n", ft_strnstr(big, little, len));
	return (0);
}*/