/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:11:28 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/06 18:35:09 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (8);
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

	printf("My function gives: %d\n", ft_isalnum(c));
	printf("Original function gives: %d\n", isalnum(c));
	return (0);	
}*/
