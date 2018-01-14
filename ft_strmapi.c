/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:55:29 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 16:10:15 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned in, char))
{
	int		i;
	char	*mappedstr;

	if (s == NULL || f == NULL)
		return (NULL);
	mappedstr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (mappedstr == NULL)
		return (NULL);
	i = -1;
	while (s[++i])
	{
		mappedstr[i] = f(i, s[i]);
	}
	mappedstr[i] = '\0';
	return (mappedstr);
}
