/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:54:15 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:55:35 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ************************************************************* */
/*                                                               */
/*  trims beginning & end of a str with a specific set of chars  */
/*                                                               */
/* ************************************************************* */

static int	is_here(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		y;
	int			size;
	char		*ret;

	i = 0;
	if (s1 == NULL)
		return (NULL);
	y = ft_strlen(s1);
	size = 0;
	if (set == 0)
		return (ft_strdup(s1));
	while (is_here(s1[i], set))
		i++;
	if (i == y)
		return (ft_calloc(1, 1));
	while (is_here(s1[y - 1], set))
		y--;
	size = (y - i);
	ret = (char *)ft_calloc(size + 1, sizeof(char));
	if (!ret)
		return (NULL);
	ft_strncpy(ret, &s1[i], size);
	return (ret);
}
