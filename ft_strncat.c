/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:11:40 by itoth             #+#    #+#             */
/*   Updated: 2017/01/09 14:52:16 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *destination, const char *source, size_t num)
{
	size_t	i;
	int		k;

	i = 0;
	k = ft_strlen(destination);
	while (i < num && source[i] != '\0')
	{
		destination[k + i] = source[i];
		i++;
	}
	destination[k + i] = '\0';
	return (destination);
}
