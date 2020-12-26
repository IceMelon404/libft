/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 20:26:48 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 12:06:13 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define NOT_INT -1

static int	ft_isspace(char c)
{
	return (c == '\f' || c == '\n' || c == '\r' || c == '\t' || c == '\v'
	|| c == ' ');
}

static int	ft_atoi_single(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (NOT_INT);
}

int			ft_atoi(const char *nptr)
{
	int		sign;
	t_size	val;
	int		temp;

	sign = 1;
	val = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '+')
		nptr++;
	else if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	while ((temp = ft_atoi_single(*nptr++)) != NOT_INT)
		val = val * 10 + temp;
	return (val * sign);
}
