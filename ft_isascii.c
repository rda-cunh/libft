/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:15:24 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/06 18:22:59 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);

	printf("My function gives: %d\n", ft_isascii(c));
	printf("Original function gives: %d\n", isascii(c));
	return (0);	
}*/
