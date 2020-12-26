/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:51:50 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 23:39:06 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear (t_list **lst, void (*del)(void*))
{
	t_list	*elem;
	t_list	*tmp;

	elem = *lst;
	while (elem)
	{
		tmp = elem;
		elem = elem->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = 0;
}
