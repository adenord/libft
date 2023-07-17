/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:35:07 by adenord           #+#    #+#             */
/*   Updated: 2023/07/15 13:39:32 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len)
	{
		while (haystack[i] == needle[y] && i < len)
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
