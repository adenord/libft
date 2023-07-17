/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenord <alexandre.denord@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 21:50:39 by adenord           #+#    #+#             */
/*   Updated: 2023/07/13 10:17:21 by adenord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
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