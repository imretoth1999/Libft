/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:18:13 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 16:10:39 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*p;

	if (!s)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p)
	{
		while (start--)
			s++;
		ft_strncpy(p, s, len);
		p[len] = '\0';
	}
	return (p);
}
