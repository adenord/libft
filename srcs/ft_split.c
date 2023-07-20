/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 01:59:09 by adenord           #+#    #+#             */
/*   Updated: 2023/07/20 17:04:03 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strndup(const char *src, unsigned int size)
{
	unsigned int		i;
	char				*dest;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_words(const char *str, char sep)
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

	if (!s || !(tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	i = 0;
	y = 0;
	while (y < (count_words(s, c)))
	{
		if (c == 0)
			tab[y++] = NULL;
		while (s[i] == c && s[i])
			i++;
		temp = i;
		while (s[i] && s[i] != c)
			i++;
		tab[y] = ft_strndup(&s[temp], (i - temp));
		y++;
	}
	tab[y] = NULL;
	return (tab);
}
