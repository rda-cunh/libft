/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:25:18 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/08 00:05:51 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
		if (nptr[i] == '-' || nptr[i] == '+')
			return (0);
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char str[] = " ---+--+1234ab567";
	printf("%i\n", ft_atoi(str));
	printf("%i\n", atoi(str));
	return (0);
}*/