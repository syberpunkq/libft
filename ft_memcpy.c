/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <mzapdos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 16:45:48 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/26 00:24:28 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
