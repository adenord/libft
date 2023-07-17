/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:46:54 by adenord           #+#    #+#             */
/*   Updated: 2023/07/17 12:02:49 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

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
		return (dst + 1);
	return (NULL);
}
