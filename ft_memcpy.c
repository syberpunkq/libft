/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:45:48 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/21 16:52:00 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*d1;
	unsigned char	*s1;

	d1 = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d1[i] = s1[i];
		i++;
	}
	return (dst);
}
