/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <mzapdos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 18:31:27 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/21 20:13:56 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	const unsigned char	*from;
	unsigned char		*to;

	from = (const unsigned char *)src;
	to = (unsigned char *)dst;
	i = 0;
	if (dst >= src && dst <= src + len)
	{
		i = len - 1;
		while (i >= 0)
		{
			to[i] = from[i];
			i--;
		}
	}
	else
	{
		while (i < (int)len)
		{
			to[i] = from[i];
			i++;
		}
	}
	return (dst);
}
