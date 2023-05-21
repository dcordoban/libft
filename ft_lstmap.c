/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcordoba <dcordoba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 11:38:06 by dcordoba          #+#    #+#             */
/*   Updated: 2023/05/21 14:36:25 by dcordoba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res_list;
	t_list	*item;

	if (!lst || !f)
		return (0);
	res_list = 0;
	while (lst)
	{
		item = ft_lstnew(f(lst->content));
		if (!(item))
		{
			while (res_list)
			{
				item = res_list->next;
				del(res_list->content);
				free(res_list);
				res_list = item;
			}
		}
		ft_lstadd_back(&res_list, item);
		lst = lst->next;
	}
	return (res_list);
}*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		if (!(new = ft_lstnew((*f)(lst->content))))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
