/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:26:07 by adenord           #+#    #+#             */
/*   Updated: 2023/07/18 18:44:23 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ret;

	ret = dst;
	while (n > 0)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		n--;
	}
	return (ret);
}
