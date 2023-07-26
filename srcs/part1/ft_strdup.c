/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 14:03:26 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:44:23 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ******************** */
/*                      */
/*  duplicate a string  */
/*                      */
/* ******************** */

char	*ft_strdup(const char *s1)
{
	int		src_len;
	char	*dest;

	src_len = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * src_len + 1);
	if (!dest)
		return (0);
	ft_strcpy(dest, s1);
	return (dest);
}
