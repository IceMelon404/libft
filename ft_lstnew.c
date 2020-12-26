/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsekim <junsekim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 19:07:03 by junsekim          #+#    #+#             */
/*   Updated: 2020/12/26 23:32:12 by junsekim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list	*ret;

	ret = (t_list*)malloc(sizeof(t_list));
	if (!ret)
		return (ret);
	ret->content = content;
	ret->next = 0;
	return (ret);
}
