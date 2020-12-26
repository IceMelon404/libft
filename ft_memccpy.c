/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 18:35:16 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 12:12:37 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, t_size n)
{
	t_byte	temp;
	t_byte	*n_src;
	t_byte	*n_dest;

	n_dest = dest;
	n_src = (t_byte*)src;
	while (n--)
	{
		temp = *(n_src++);
		*(n_dest++) = temp;
		if (temp == (t_byte) c)
			return (n_dest);
	}
	return (0);
}
