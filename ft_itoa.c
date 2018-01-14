/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:06:51 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 15:21:39 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*p;
	int		nsize;
	int		neg;

	neg = 0;
	if (n < 0)
		neg = 1;
	nsize = ft_numsize(n) + neg;
	if ((p = (char *)malloc(sizeof(char) * (nsize + 1))) == NULL)
		return (NULL);
	p[nsize] = '\0';
	while (nsize--)
	{
		p[nsize] = ft_abs(n % 10) + '0';
		n /= 10;
	}
	if (neg == 1)
		p[0] = '-';
	return (p);
}
