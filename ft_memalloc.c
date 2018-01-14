/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itoth <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:27:56 by itoth             #+#    #+#             */
/*   Updated: 2017/01/11 16:10:50 by itoth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*p;

	if (size == 0)
		return ((void *)0);
	p = malloc(size);
	if (p)
	{
		ft_bzero(p, size);
		return (p);
	}
	return (NULL);
}
