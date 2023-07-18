/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:09:10 by adenord           #+#    #+#             */
/*   Updated: 2023/07/18 10:22:18 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void *ret;

	ret = dst;
	while (n > 0)
	{
		*(char *)dst = *(char *)src;
		dst += 1;
		src += 1;
		n--;
	}
	return (ret);
}

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
