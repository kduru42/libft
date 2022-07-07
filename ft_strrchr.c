/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:10:19 by kduru             #+#    #+#             */
/*   Updated: 2022/06/25 15:10:21 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c >= 0)
	{
		while (str[i])
			i++;
		while (i >= 0)
		{
			if (str[i] == c % 256)
				return ((char *)(str + i));
			i--;
		}
	}
	return (NULL);
}
