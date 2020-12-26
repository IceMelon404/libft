/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 18:29:46 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 17:12:02 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, t_size len)
{
	t_byte	*n_dest;
	t_byte	*n_src;

	if (!dest && !src)
		return (0);
	n_src = (t_byte*)src;
	n_dest = (t_byte*)dest;
	while (len--)
		*(n_dest++) = *(n_src++);
	return (dest);
}
