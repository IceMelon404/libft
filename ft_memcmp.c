/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 19:17:50 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 16:25:26 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, t_size len)
{
	t_byte	*n_b1;
	t_byte	*n_b2;

	if (len == 0)
		return (0);
	n_b1 = (t_byte*)b1;
	n_b2 = (t_byte*)b2;
	while (--len && *n_b1 == *n_b2)
	{
		n_b1++;
		n_b2++;
	}
	return (*n_b1 - *n_b2);
}
