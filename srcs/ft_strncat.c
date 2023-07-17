/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:29:24 by adenord           #+#    #+#             */
/*   Updated: 2023/07/13 10:19:11 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (s1[i])
		i++;
	while (s2[y] && y < n)
	{
		s1[i] = s2[y];
		i++;
		y++;
	}
	s1[i] = '\0';
	return (s1);
}
