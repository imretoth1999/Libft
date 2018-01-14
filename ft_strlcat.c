/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:30:06 by itoth             #+#    #+#             */
/*   Updated: 2017/01/09 14:30:15 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ld;
	size_t	ls;
	size_t	siz_orig;

	siz_orig = size;
	ld = ft_strlen(dst);
	ls = ft_strlen(src);
	while (*dst && size)
	{
		dst++;
		size--;
	}
	if (!size)
		return (siz_orig + ls);
	while (*src && size > 1)
	{
		size--;
		*dst++ = *src++;
	}
	*dst = '\0';
	return (ld + ls);
}
