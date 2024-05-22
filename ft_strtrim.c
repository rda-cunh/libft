/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:17:44 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/08 01:03:55 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	str = ft_substr(s1, 0, i + 1);
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	s1[] = "123...get up...123";
	char	set[] = "123";
	
	printf("trimed str: %s\n", ft_strtrim(s1, set));
	return (0);
}*/