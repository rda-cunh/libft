/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:14:39 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/24 18:35:38 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char c;
	printf("Enter a character: ");
	scanf("%c", &c);

	printf("My function gives: %d\n", ft_toupper(c));
	printf("Original function gives: %d\n", toupper(c));
	return (0);	
}*/
