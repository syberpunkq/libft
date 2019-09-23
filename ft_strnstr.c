/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syberpunkq <syberpunkq@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 00:39:46 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/22 20:14:59 by syberpunkq       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			j;
	const char		*the_place;

	i = 0;
	if (needle[0] == 0)
		return((char *)&haystack[0]);
	while (haystack[i] && i < len)
	{
		if (needle[j] == 0)
			return ((char *)the_place);
		else if (haystack[i] == needle[j])
		{
			if (j == 0)
				the_place = &haystack[i];
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (NULL);
}
