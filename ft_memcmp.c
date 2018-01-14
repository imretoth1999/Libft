/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:58:46 by itoth             #+#    #+#             */
/*   Updated: 2017/01/09 14:51:17 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;
	int		a;
	int		b;

	i = 0;
	while (i < n)
	{
		a = *((unsigned char*)(str1 + i));
		b = *((unsigned char*)(str2 + i));
		if (a != b)
			return (a - b);
		i++;
	}
	return (0);
}
