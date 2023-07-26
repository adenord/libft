/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:31:08 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:41:41 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ********************** */
/*                        */
/*  compare memory areas  */
/*                        */
/* ********************** */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;

	if (n == 0)
		return (0);
	while ((n - 1) > 0 && *(char *)s1 == *(char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	c1 = (unsigned char)*(char *)s1;
	c2 = (unsigned char)*(char *)s2;
	return (c1 - c2);
}
