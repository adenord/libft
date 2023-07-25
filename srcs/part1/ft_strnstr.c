/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:35:07 by adenord           #+#    #+#             */
/*   Updated: 2023/07/20 18:44:09 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < len && haystack[i])
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
