/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:52:06 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 16:09:52 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(char const *s1, char const *s2)
{
	unsigned int	diff;

	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	diff = (unsigned char)*s1 - (unsigned char)*s2;
	return (diff);
}
