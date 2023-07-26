/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 11:33:54 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 10:28:41 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
.-"-.     .-"-.     .-"-.     .-"-.     .-"-.     .-"-.
    "-.-"     "-.-"     "-.-"     "-.-"     "-.-"

		  allocate and free dynamic memory

.-"-.     .-"-.     .-"-.     .-"-.     .-"-.     .-"-.
    "-.-"     "-.-"     "-.-"     "-.-"     "-.-"
*/

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
