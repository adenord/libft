/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:09:10 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:42:39 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ****************** */
/*                    */
/*  copy memory area  */
/*                    */
/* ****************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;

	i = len;
	if (src == dst)
		return (dst);
	if (dst > src && dst <= (src + len))
	{
		while (i > 0)
		{
			*(char *)(dst + (i - 1)) = *(char *)(src + (i - 1));
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
