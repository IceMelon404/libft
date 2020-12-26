/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 21:12:53 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 16:15:36 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		len;
	char	*ret;

	len = (int)ft_strlen(src);
	ret = (char*)malloc(len + 1);
	if (!ret)
		return (0);
	ret[len] = 0;
	while (--len >= 0)
		ret[len] = src[len];
	return (ret);
}
