/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 19:20:08 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/10 18:39:08 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (s == NULL)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main(void)
{
	char s[] = "teste2";
	
	printf("My function gives = %zu\n", ft_strlen(s));
	printf("Original function gives = %zu\n", strlen(s));	
	return (0);
}*/
