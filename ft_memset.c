/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 18:08:48 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 12:05:35 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *dest, int c, t_size len)
{
	t_byte *dest_byte;

	dest_byte = (t_byte*) dest;
	while (len--)
		*(dest_byte++) = (unsigned char) c;
	return (dest);
}
