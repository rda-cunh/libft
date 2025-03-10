/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_safe_atol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rda-cunh <rda-cunh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 19:25:31 by rda-cunh          #+#    #+#             */
/*   Updated: 2025/03/10 19:26:36 by rda-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//helper function to check overflow
static int	check_overflow(long long res, char next, int sign)
{
	int	max_rem;

	if (sign == -1)
		max_rem = -(LONG_MIN % 10);
	else
		max_rem = LONG_MAX % 10;
	if (res > LONG_MAX / 10 || (res == LONG_MAX / 10 && (next - '0') > max_rem))
		return (1);
	return (0);
}

//atol function that handles long long overflow
long long	ft_safe_atol(const char *str, int *error)
{
	long long	result;
	int			sign;

	result = 0;
	sign = 1;
	*error = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (check_overflow(result, *str, sign))
		{
			*error = 1;
			return (sign * (long long)LONG_MAX + (sign == -1));
		}
		result = result * 10 + (*str++ - '0');
	}
	return (result * sign);
}