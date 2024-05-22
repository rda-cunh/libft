/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:49:47 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/08 01:02:41 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(len * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s1 && *s1)
	{
		str[i++] = *s1;
		s1++;
	}
	while (s2 && *s2)
	{
		str[i++] = *s2;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "My name is Mario";
	char s2[] = ", Super Mario"; 

	printf("%s\n", ft_strjoin(s1, s2));	
	return (0);
}*/