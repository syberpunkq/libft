/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:19:53 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/19 23:31:36 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while (i < n && s1[i] == s2[i])
	{
		i++;
	}
	return (*s1 - *s2);
}