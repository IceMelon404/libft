/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 21:20:53 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 12:53:45 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, t_size len)
{
	t_byte	*n_s1;
	t_byte	*n_s2;

	if (len == 0)
		return (0);
	n_s1 = (t_byte*)s1;
	n_s2 = (t_byte*)s2;
	while (--len && *n_s1 && *n_s1 == *n_s2)
	{
		n_s1++;
		n_s2++;
	}
	return (*n_s1 - *n_s2);
}
