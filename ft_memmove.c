/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:40:01 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 16:06:27 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;
	size_t	i;

	i = -1;
	source = (char *)src;
	dst = (char *)dest;
	if (source < dst)
		while ((int)(--n) >= 0)
			*(dst + n) = *(source + n);
	else
		while (++i < n)
			*(dst + i) = *(source + i);
	return (dst);
}
