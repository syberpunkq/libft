/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:39:51 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/24 21:44:04 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*dst;

	i = 0;
	while (s[i])
		i++;
	dst = malloc(sizeof(char) * i + 1);
	i = 0;
	while (s[i])
	{
		dst[i] = f(s[i]);
		i++;
	}
	dst[i] = 0;
	return (dst);
}
