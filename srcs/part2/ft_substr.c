/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:06:45 by adenord           #+#    #+#             */
/*   Updated: 2023/10/22 17:43:11 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* *********************************** */
/*                                     */
/*  returns a substring from a string  */
/*                                     */
/* *********************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		len = 0;
	if (len > (str_len + 1))
		len = str_len + 1;
	ret = (char *)ft_calloc((len + 1), sizeof(char));
	if (!ret)
		return (NULL);
	ft_strncpy(ret, &s[start], len);
	return (ret);
}
