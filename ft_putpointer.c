/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 22:46:57 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/12/13 23:33:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countpointer(unsigned long long ptr)
{
	int	counter;

	counter = 0;
	while (ptr != 0)
	{
		counter++;
		ptr = ptr / 16;
	}
	return (counter);
}

int	ft_printpointer(unsigned long long ptr)
{
	if (ptr >= 16)
	{
		ft_printpointer(ptr / 16);
		ft_printpointer(ptr % 16);
	}
	else
	{
		if (ptr <= 9)
			ft_putchar('0' + ptr);
		else
			ft_putchar('a' - 10 + ptr);
	}
	return (ft_countpointer(ptr));
}

int	ft_putpointer(unsigned long long ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		len += write(1, "(nil)", 5);
		return (len);
	}
	len = write(1, "0x", 2);
	len += ft_printpointer(ptr);
	return (len);
}
