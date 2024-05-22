/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:39:17 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/14 23:44:31 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_hexlen(unsigned int c)
{
	int	len;

	len = 0;
	while (c != 0)
	{
		c = c / 16;
		len++;
	}
	return (len);
}

void	ft_printhex(unsigned int c, const char format)
{
	if (c > 15)
	{
		ft_printhex(c / 16, format);
		ft_printhex(c % 16, format);
	}
	else
	{
		if (c <= 9)
			ft_putchar(c + '0');
		else
		{
			if (format == 'x')
				ft_putchar(c - 10 + 'a');
			if (format == 'X')
				ft_putchar(c - 10 + 'A');
		}
	}
}

int	ft_puthex(unsigned int c, const char format)
{
	if (c == 0)
		return (write (1, "0", 1));
	else
		ft_printhex (c, format);
	return (ft_hexlen(c));
}
