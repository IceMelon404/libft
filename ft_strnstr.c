/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 19:42:34 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 13:01:39 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long ft_max(long long a, long long b)
{
	if (a < b)
		return (b);
	return (a);
}

static long long ft_min(long long a, long long b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_strnstr(const char *big, const char *little, t_size len)
{
	t_size	g_limit;
	t_size	len_limit;
	t_size	little_len;
	t_size	idx;

	if (!*little)
		return ((char*)big);
	idx = 0;
	little_len = ft_strlen(little);
	g_limit = (t_size)ft_max(0, (long long)ft_strlen(big) - little_len + 1);
	len_limit = (t_size)ft_max(0, (long long)len - little_len + 1);
	g_limit = (t_size)ft_min(g_limit, len_limit);
	while (idx < g_limit)
	{
		if (ft_strncmp(&big[idx], little, little_len) == 0)
			return ((char*)&big[idx]);
		idx++;
	}
	return (0);
}
