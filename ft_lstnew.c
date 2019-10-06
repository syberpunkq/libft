/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzapdos <mzapdos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 20:28:28 by mzapdos           #+#    #+#             */
/*   Updated: 2019/10/06 20:29:55 by mzapdos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*item;

	item = (t_list*)malloc(sizeof(t_list));
	item->content_size = content_size;
	item->content = malloc(sizeof(char) * content_size);
	item->content = memcpy(item->content, content, content_size);
	item->next = NULL;
	return (item);
}
