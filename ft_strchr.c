/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 18:39:36 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/11/08 00:27:39 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (s == NULL)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Vai ser um teste";
	char c = 't';

	printf("My function: %s\n", ft_strchr(str, c));
	printf("My function: %s\n", strchr(str, c));
}
*/
