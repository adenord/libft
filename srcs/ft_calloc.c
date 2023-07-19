/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:33:54 by adenord           #+#    #+#             */
/*   Updated: 2023/07/19 15:27:32 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

void	*ft_calloc(size_t count, size_t size)
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
