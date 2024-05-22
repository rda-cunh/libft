/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:14:39 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/06 18:33:12 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (16384);
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

	printf("My function gives: %d\n", ft_isprint(c));
	printf("Original function gives: %d\n", isprint(c));
	return (0);	
}*/
