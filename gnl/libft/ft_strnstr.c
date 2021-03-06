/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 16:06:23 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/23 16:06:31 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t i;
	size_t c;
	size_t item;

	i = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && n > 0)
	{
		c = 0;
		if (n < ft_strlen(s2))
			return (NULL);
		item = i;
		while (s1[item] == s2[c] && s2[c] && s1[item])
		{
			item++;
			c++;
		}
		if (s2[c] == '\0')
			return ((char *)s1 + i);
		i++;
		n--;
	}
	return (NULL);
}
