/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <mzapdos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 20:35:41 by mzapdos           #+#    #+#             */
/*   Updated: 2019/10/06 20:55:54 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*prev_lst;
	t_list	*new_lst;
	t_list	*start_lst;

	while (lst)
	{
		new_lst = ft_lstnew(lst->content, lst->content_size);
		f(new_lst);
		if (prev_lst)
		{
			prev_lst->next = new_lst;
		}
		else
		{
			start_lst = new_lst;
		}
		prev_lst = new_lst;
		lst = lst->next;
	}
	return (start_lst);
}
