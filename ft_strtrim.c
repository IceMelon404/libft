/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:16:52 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/30 20:06:40 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	t_size	set_len;
	t_size	idx;
	t_size	s;
	t_size	e;

	idx = 0;
	set_len = ft_strlen(set) + 1;
	while (ft_memchr(set, s1[idx], set_len) && s1[idx])
		idx++;
	s = idx;
	e = idx;
	while (s1[idx])
	{
		if (!ft_memchr(set, s1[idx], set_len) &&
		ft_memchr(set, s1[idx + 1], set_len))
			e = idx + 1;
		idx++;
	}
	return (ft_substr(s1, s, e - s));
}
