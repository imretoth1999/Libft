/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:43:01 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 15:11:16 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char				*p;
	unsigned	int		i;

	if (!s)
		return (NULL);
	p = ft_stralloc(s);
	if (p)
	{
		i = -1;
		while (s[++i])
			p[i] = f(s[i]);
		p[i] = '\0';
	}
	return (p);
}
