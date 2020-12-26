/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 18:43:37 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 17:12:04 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, t_size len)
{
	t_byte	*n_dest;
	t_byte	*n_src;
	int		dir;

	if (!dest && !src)
		return (0);
	n_dest = (t_byte*)dest;
	n_src = (t_byte*)src;
	dir = 1;
	if (n_dest > n_src)
	{
		n_dest += (len - 1);
		n_src += (len - 1);
		dir = -1;
	}
	while (len--)
	{
		*n_dest = *n_src;
		n_dest += dir;
		n_src += dir;
	}
	return (dest);
}
