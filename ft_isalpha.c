/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:09:55 by rda-cunh          #+#    #+#             */
/*   Updated: 2023/10/06 18:21:25 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1024);
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

	printf("My function gives: %d\n", ft_isalpha(c));
	printf("Original function gives: %d\n", isalpha(c));
	return (0);	
}*/
