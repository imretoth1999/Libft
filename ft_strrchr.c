/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:28:49 by itoth             #+#    #+#             */
/*   Updated: 2017/01/09 14:28:52 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*found;

	i = 0;
	found = 0;
	while (str[i])
	{
		if (str[i] == c)
			found = (char *)(str + i);
		i++;
	}
	if (!c)
		return (char *)(str + ft_strlen(str));
	return (found);
}
