/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:35:07 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:26:12 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ******************************** */
/*                                  */
/*  locate a substring in a string  */
/*                                  */
/* ******************************** */

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i] == needle[y])
		{
			if (y == (ft_strlen(needle) - 1))
				return ((char *)&haystack[i - y]);
			y++;
			i++;
		}
		i -= y;
		y = 0;
		i++;
	}
	return (0);
}
