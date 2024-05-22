/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:11:50 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/11/10 00:25:18 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s);
	str = (char *)malloc (sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[size] = '\0';
	return (str);
}
