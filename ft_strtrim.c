/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <mzapdos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 22:34:07 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/25 00:05:58 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isspace(int c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

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
	str[i] = 0;
	return (str);
}

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	end;
	size_t	start;
	char	*res;

	i = 0;
	start = 0;
	end = 0;
	res = "";
	while (ft_isspace(s[i]))
		i++;
	if (!s[i])
		return (res);
	start = i;
	while (s[i])
	{
		if (!ft_isspace(s[i]))
			end = i;
		i++;
	}
	if ((end - start) > 0)
		res = ft_strsub(s, start, end - start + 1);
	return (res);
}
