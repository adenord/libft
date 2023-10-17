/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 01:59:09 by adenord           #+#    #+#             */
/*   Updated: 2023/10/17 09:19:27 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ******************************************* */
/*                                             */
/*  splits a string using a char as parameter  */
/*                                             */
/* ******************************************* */

static void	*free_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static int	count_words(const char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	if (!str)
		return (0);
	count = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i] != sep && str[i])
			count++;
		while (str[i] != sep && str[i])
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
		if (!tab[y])
			return (free_tab(tab));
	}
	tab[y] = NULL;
	return (tab);
}
