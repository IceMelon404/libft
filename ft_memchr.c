/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 19:15:12 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 14:58:20 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dest, int c, t_size len)
{
	t_byte	*n_dest;

	n_dest = (t_byte*)dest;
	while (len--)
	{
		if (*n_dest == (t_byte)c)
			return (n_dest);
		n_dest++;
	}
	return (0);
}
