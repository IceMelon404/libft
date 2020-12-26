/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:16:52 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/27 02:37:06 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	t_size	s_len;
	t_size	set_len;
	t_size	idx;
	t_size	s;
	t_size	e;

	idx = 0;
	e = 0;
	s_len = ft_strlen(s1);
	set_len = ft_strlen(set) + 1;
	while (ft_memchr(set, s1[idx], set_len) && s1[idx])
		idx++;
	s = idx;
	while (idx <= s_len)
	{
		if (idx != 0 && ft_memchr(set, s1[idx], set_len) &&
		!ft_memchr(set, s1[idx - 1], set_len))
			e = idx;
		idx++;
	}
	if (e < s)
		e = s;
	return (ft_substr(s1, s, e - s));
}
