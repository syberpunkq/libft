/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 22:11:00 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/24 22:21:44 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = malloc(sizeof(char) * len + 1);
	while (i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	return (str);
}
