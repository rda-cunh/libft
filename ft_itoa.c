/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 01:32:31 by rmendes           #+#    #+#             */
/*   Updated: 2023/11/08 00:21:21 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digits_count(int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

static void	ft_populate_string(char *str, long int num, int sign, int digits)
{
	str[digits] = '\0';
	while (digits > 0)
	{
		digits--;
		str[digits] = (num % 10) + '0';
		num /= 10;
	}
	if (sign)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	long int	num;
	int			sign;
	int			digits;
	char		*str;

	num = n;
	sign = 0;
	digits = ft_digits_count(num);
	str = malloc(sizeof(char) * (digits + 1));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		num = -num;
		sign = 1;
	}
	ft_populate_string(str, num, sign, digits);
	return (str);
}
/*
#include <stdio.h>

int	main(void);
{
	int n = -005868;
	
	printf("%s\n", ft_itoa(in));
	return (0);
}*/