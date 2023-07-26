/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:06:28 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:45:02 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *********************************** */
/*                                     */
/*  size-bounded string concatenation  */
/*                                     */
/* *********************************** */

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	t;

	if (ft_memchr(dst, '\0', dstsize) == NULL)
		return (ft_strlen(src) + dstsize);
	t = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	y = 0;
	if (dstsize == 0 || dstsize <= i)
		return (ft_strlen(src) + dstsize);
	while (i < (dstsize - 1) && src[y])
	{
		dst[i] = src[y];
		i++;
		y++;
	}
	dst[i] = '\0';
	return (t);
}
