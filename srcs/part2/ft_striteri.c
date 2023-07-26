/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 22:26:47 by adenord           #+#    #+#             */
/*   Updated: 2023/07/26 10:50:41 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
.-"-.     .-"-.     .-"-.     .-"-.     .-"-.     .-"-.
    "-.-"     "-.-"     "-.-"     "-.-"     "-.-"

	applies a function to each character of a string 

.-"-.     .-"-.     .-"-.     .-"-.     .-"-.     .-"-.
    "-.-"     "-.-"     "-.-"     "-.-"     "-.-"
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		(*f)(i, &s[i]);
}
