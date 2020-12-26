/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 13:34:33 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 18:18:07 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


static t_size	ft_split_cnt(char const *s, char sep)
{
	int		idx;
	t_size	cnt;

	idx = 0;
	cnt = 0;
	while (idx == 0 || s[idx-1])
	{
		if (idx != 0 && (s[idx] == '\0' || s[idx] == sep) && s[idx-1] != sep)
			cnt++;
		idx++;
	}
	return (cnt);
}

static t_size	ft_word_len(char const *s, char sep)
{
	t_size ret;

	ret = 0;
	while (s[ret] != '\0' && s[ret] != sep)
		ret++;
	return (ret);
}

static char		**ft_split_free(char **s, t_size f_idx)
{
	t_size	idx;

	idx = 0;
	while (idx < f_idx)
		free(s[idx++]);
	free(s);
	return (0);
}

static char const	*ft_word_start(char const *s, char sep)
{
	while (*s != 0 && *s == sep)
		s++;
	return (s);
}

char	**ft_split(char	const *s, char c)
{
	char	**ret;
	t_size	idx;
	t_size	split_cnt;
	t_size	word_len;

	idx = 0;
	split_cnt = ft_split_cnt(s, c);
	ret = malloc((split_cnt + 1) * sizeof(char*));
	if (!ret)
		return (0);
	while (idx < split_cnt)
	{
		s = ft_word_start(s, c);
		word_len = ft_word_len(s, c);
		ret[idx] = malloc((word_len + 1) * sizeof(char));
		if (!ret[idx])
			return (ft_split_free(ret, idx));
		ft_strlcpy(ret[idx], s, word_len + 1);
		s += word_len;
		idx++;
	}
	ret[idx] = 0;
	return (ret);
}
