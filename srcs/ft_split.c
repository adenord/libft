/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 01:59:09 by adenord           #+#    #+#             */
/*   Updated: 2023/07/21 10:41:36 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char sep)
{
	int	i;
	int	count;
	int	size;

	i = 0;
	size = ft_strlen(str);
	count = 1;
	while (str[i] == sep)
		i++;
	if (i == size)
		return (0);
	while (str[i])
	{
		if (str[i] == sep && str[i + 1] != sep && i + 1 != size)
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		y;
	int		temp;

	if (!s)
		return (NULL);
	tab = (char **)ft_calloc((count_words(s, c) + 1), sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	y = -1;
	while (++y < (count_words(s, c)))
	{
		while (s[i] == c && s[i])
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		tab[y] = ft_substr(s, temp, (i - temp));
	}
	tab[y] = NULL;
	return (tab);
}
