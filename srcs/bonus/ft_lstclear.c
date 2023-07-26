/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 10:59:28 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:29:06 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *********************** */
/*                         */
/*  deletes and free list  */
/*                         */
/* *********************** */

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && (*del))
	{
		while (*lst)
		{
			temp = (*lst)->next;
			ft_lstdelone(*lst, (*del));
			*lst = temp;
		}
	}
	lst = NULL;
}
