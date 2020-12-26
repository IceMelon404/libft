/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 14:05:45 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/27 00:56:32 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s,
		char (*f)(unsigned int, char))
{
	t_size	len;
	char	*ret;
	t_size	idx;

	len = ft_strlen(s);
	ret = (char*)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (0);
	ret[len] = 0;
	idx = 0;
	while (idx < len)
	{
		ret[idx] = f(idx, s[idx]);
		idx++;
	}
	return (ret);
}
