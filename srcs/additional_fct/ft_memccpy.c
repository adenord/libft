/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:46:54 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:22:03 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ***************************** */
/*                               */
/*  copy n bytes of memory area  */
/*                               */
/* ***************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n > 0 && *(char *)src != (unsigned char)c)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		n--;
	}
	if (n > 0)
	{
		*(char *)dst = *(char *)src;
		return (dst + 1);
	}
	return (NULL);
}
