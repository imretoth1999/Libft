/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:44:34 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 16:08:44 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(haystack, needle, len) == 0)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
