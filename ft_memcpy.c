/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:47:53 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 16:12:05 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*c;
	size_t	i;

	c = (char *)malloc(n * sizeof(char));
	i = 0;
	while (i < n)
	{
		*(c + i) = *(char *)(src + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(c + i);
		i++;
	}
	return (dest);
}
