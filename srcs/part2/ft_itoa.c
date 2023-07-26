/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 17:05:44 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 11:49:43 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *************************** */
/*                             */
/*  convert integer to string  */
/*                             */
/* *************************** */

static int	number_len(int nb)
{
	int				i;
	unsigned int	n;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		n = -nb;
	}
	else
		n = nb;
	while (n > 0)
	{
		n *= 0.1;
		i++;
	}
	return (i);
}

static void	init_div(unsigned long *div, size_t size, int n)
{
	if (n < 0)
		size--;
	*div = 1;
	while (size > 0)
	{
		*div *= 10;
		size--;
	}
	*div /= 10;
}

char	*ft_itoa(int n)
{
	size_t			size;
	char			*ret;
	int				i;
	unsigned long	div;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = number_len(n);
	ret = (char *)ft_calloc(size + 1, sizeof(char));
	if (!ret)
		return (NULL);
	i = -1;
	init_div(&div, size, n);
	if (n < 0)
	{
		ret[++i] = '-';
		n *= -1;
	}
	while (div > 0)
	{
		ret[++i] = (n / div) + 48;
		n %= div;
		div /= 10;
	}
	return (ret);
}
