/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 13:24:56 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/27 00:22:58 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_size	ft_abs(int n)
{
	t_size ret;

	if (n < 0)
		ret = (t_size)-1 * n;
	else
		ret = (t_size)n;
	return (ret);
}

static t_size	ft_digit_size(t_size n)
{
	t_size				ret;
	unsigned long long	max;

	max = 10;
	ret = 1;
	while (n >= max)
	{
		ret++;
		max *= 10;
	}
	return (ret);
}

char			*ft_itoa(int n)
{
	t_size	val;
	int		sign;
	int		len;
	char	*ret;

	sign = (n < 0);
	val = ft_abs(n);
	len = ft_digit_size(val) + sign + 1;
	ret = (char*)ft_calloc(len, sizeof(char));
	if (!ret)
		return (0);
	ret[--len] = '\0';
	while (val >= 10)
	{
		ret[--len] = val % 10 + '0';
		val = val / 10;
	}
	ret[--len] = val + '0';
	if (sign)
		ret[0] = '-';
	return (ret);
}
