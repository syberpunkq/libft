/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 20:41:18 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/21 20:41:25 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	char l;

	l = (char)c;
	if (l >= 'A' && l <= 'Z')
		c = c + 32;
	return (c);
}