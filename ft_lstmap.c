/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 21:56:25 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 23:56:42 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	**elem;
	t_list	*ret;

	elem = &ret;
	while (lst)
	{
		*elem = (t_list*)malloc(sizeof(t_list));
		if (!(*elem))
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		(*elem)->content = f(lst->content);
		elem = &((*elem)->next);
		lst = lst->next;
	}
	*elem = 0;
	return (ret);
}
