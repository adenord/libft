/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:16:02 by adenord           #+#    #+#             */
/*   Updated: 2023/07/25 15:47:47 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void(*del)(void *))
{
	t_list	*new;
	t_list	*temp;

	if (!lst || !(*f) || !(*del))
		return (NULL);
	new = NULL;
	while (lst)
	{
		temp = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&new, temp);
		if (ft_lstlast(new) == NULL)
		{
			ft_lstclear(&new, (*del));
			return (NULL);
		}
		lst = lst->next;
	}
	return (new);
}
