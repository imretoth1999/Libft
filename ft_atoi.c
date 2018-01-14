/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:29:37 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 16:11:04 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	check_out_of_bounds(long int num, int sign)
{
	if (num > 922337203685477580)
	{
		if (sign == 1)
			return (-1);
		return (0);
	}
	return (1);
}

int			ft_atoi(const char *nptr)
{
	long int	sign;
	long int	num;

	num = 0;
	sign = 1;
	while (*nptr == '\t' || *nptr == '\v' || *nptr == '\f' || *nptr == '\r'
			|| *nptr == '\n' || *nptr == '\f' || *nptr == ' ')
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	while (*nptr == '0')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9' && *nptr)
	{
		if (check_out_of_bounds(num, sign) != 1)
			return (check_out_of_bounds(num, sign));
		num = num * 10 + (*nptr++ - '0');
	}
	return (num * sign);
}
