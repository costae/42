/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/20 15:40:56 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/20 15:41:41 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dest;
	str2 = (unsigned char *)src;
	i = 0;
	if (str1 > str2)
	{
		while (i < n)
		{
			str1[n - 1] = str2[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			str1[i] = str2[i];
			i++;
		}
	}
	return (dest);
}
