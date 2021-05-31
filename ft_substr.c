/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 13:16:03 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/31 15:17:44 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
t_size len)
{
	char	*ret;

	ret = (char*)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (0);
	if (ft_strlen(s) <= start)
		*ret = '\0';
	else
		ft_strlcpy(ret, &s[start], len + 1);
	return (ret);
}
