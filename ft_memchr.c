/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <mzapdos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 20:16:23 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/21 20:24:42 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*from;

	i = 0;
	from = (char *)s;
	while (i < n)
	{
		if (from[i] == c)
			return (&from[i]);
		i++;
	}
	return (NULL);
}
