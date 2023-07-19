/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:27:47 by adenord           #+#    #+#             */
/*   Updated: 2023/07/19 18:32:35 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>

static size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int	i;
	unsigned int	y;

	i = 0;
	y = 0;
	while (s1[i])
		i++;
	while (s2[y])
	{
		s1[i + y] = s2[y];
		y++;
	}
	s1[i + y] = '\0';
	return (s1);
}

static void	ft_bzero(void *s, size_t n)
{
	while (n > 0)
	{
		if (*(char *)s != 0)
			*(char *)s = 0;
		s += 1;
		n--;
	}
}

static void	*ft_calloc(size_t count, size_t size)
{
	void			*ret;

	if (count == 0 || size == 0)
		return (ft_calloc(1, 1));
	if ((count >= 2147483647 || size >= 2147483647) || \
	((int)count < 0 && (int)size < 0))
		return (NULL);
	ret = malloc((int)count * (int)size);
	if (!ret)
		return (NULL);
	ft_bzero(ret, count * size);
	return (ret);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	ret = (char *)ft_calloc(len, sizeof(char));
	if (!ret)
		return (NULL);
	ft_strcat(ret, s1);
	ft_strcat(ret, s2);
	return (ret);
}
