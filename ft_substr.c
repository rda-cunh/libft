/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:22:22 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/08 01:04:02 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	sub_size;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_size = ft_strlen(s + start);
	if (sub_size < len)
		len = sub_size;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char				s[] = "Hello World";
	unsigned int		start = 7;
	size_t				len = 6; 

	printf("substr: %s\n", ft_substr(s, start, len));
	return (0);	
}*/