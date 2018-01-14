/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:45:58 by itoth             #+#    #+#             */
/*   Updated: 2017/01/09 13:46:02 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len2;

	len2 = ft_strlen(little);
	if (!*little)
		return ((char*)big);
	while (*big && len2 <= len--)
	{
		if (!ft_memcmp(big++, little, len2))
			return ((char*)big - 1);
	}
	return (NULL);
}
