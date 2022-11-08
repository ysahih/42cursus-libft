/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysahih <ysahih@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:00:26 by ysahih            #+#    #+#             */
/*   Updated: 2022/11/06 22:30:56 by ysahih           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	head = NULL;
	if (!f || !del)
		return (NULL);
	while (lst != '\0')
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear (&head, del);
			return (NULL);
		}
		ft_lstadd_back (&head, new);
		lst = lst->next;
	}
	return (head);
}
