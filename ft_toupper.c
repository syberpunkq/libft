/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 20:28:20 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/21 20:38:45 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	char l;

	l = (char)c;
	if (l >= 'a' && l <= 'z')
		c = c - 32;
	return (c);
}