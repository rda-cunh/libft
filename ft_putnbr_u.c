/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:00:22 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/13 22:21:23 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_digits_count(unsigned int n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
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

static char	*ft_utoa(unsigned int n)
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

int	ft_putnbr_u(unsigned int c)
{
	char	*str;
	int		len;

	str = ft_utoa(c);
	len = ft_putstr(str);
	free(str);
	return (len);
}
