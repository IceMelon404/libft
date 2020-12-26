/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 21:01:56 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/27 00:22:13 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_zero_long(long long *p, t_size cnt)
{
	while (cnt--)
		*(p++) = 0;
}

void	ft_zero_int(int *p, t_size cnt)
{
	while (cnt--)
		*(p++) = 0;
}

void	*ft_calloc(t_size elt_count, t_size elt_size)
{
	void	*ret;
	t_size	size;

	size = elt_size * elt_count;
	ret = malloc(size);
	if (!ret)
		return (0);
	if (size % sizeof(long long) == 0)
		ft_zero_long(ret, size / sizeof(long long));
	else if (size % sizeof(int) == 0)
		ft_zero_int(ret, size / sizeof(int));
	else
		ft_bzero(ret, size);
	return (ret);
}
