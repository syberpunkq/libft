/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <mzapdos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 00:07:40 by mzapdos           #+#    #+#             */
/*   Updated: 2019/09/25 01:11:12 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_pow(int nb, int p)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i < p)
	{
		res = res * nb;
		i++;
	}
	return (res);
}

int		digits_count(int nb)
{
	int result;

	result = 1;
	while (nb >= 10 || nb <= -10)
	{
		nb = nb / 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		i;
	int		num_of_digits;
	int		current_digit;
	int		current_pow;
	int		sign;
	char	*str;

	sign = 1;
	if (n < 0)
		sign = -1;
	num_of_digits = digits_count(n);
	str = malloc(sizeof(char) * num_of_digits + 1);
	i = 0;
	if (sign == -1)
	{
		str[i++] = '-';
		num_of_digits++;
	}
	while (i < num_of_digits)
	{
		current_pow = ft_pow(10, num_of_digits - i - 1);
		current_digit = n / current_pow * sign;
		str[i] = current_digit + '0';
		n = n - current_digit * current_pow * sign;
		i++;
	}
	return (str);
}
