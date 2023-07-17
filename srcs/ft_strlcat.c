/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 09:06:28 by adenord           #+#    #+#             */
/*   Updated: 2023/07/13 12:36:59 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static unsigned int	ft_strlen(const	char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	y;
	unsigned int	t;

	t = ft_strlen(dst) + ft_strlen(src);
	i = ft_strlen(dst);
	y = 0;
	if (dstsize == 0 || dstsize <= ft_strlen(dst))
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
