/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/23 15:54:43 by cmiron            #+#    #+#             */
/*   Updated: 2016/10/23 15:54:59 by cmiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strccpy(char *s1, char *s2, int c)
{
	int		i;

	i = 0;
	while (s2[i] != '\0' && s2[i] != c)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
