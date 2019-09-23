/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syberpunkq <syberpunkq@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 00:27:42 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/22 19:18:49 by syberpunkq       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int			i;
	int			j;
	const char	*the_place;

	i = 0;
	if (needle[0] == 0)
		return((char *)&haystack[0]);
	while (haystack[i])
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
