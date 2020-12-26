/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 13:02:52 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/27 01:17:36 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_size	ft_strlcpy(char *restrict dest,
const char *restrict src, t_size dstsize)
{
	t_size	src_len;

	if (dstsize == 0 || !dest)
		return (ft_strlen(src));
	if (!src)
		return (0);
	src_len = 0;
	while (dstsize > 1 && src[src_len])
	{
		dest[src_len] = src[src_len];
		src_len++;
		dstsize--;
	}
	dest[src_len] = '\0';
	while (src[src_len])
		src_len++;
	return (src_len);
}
