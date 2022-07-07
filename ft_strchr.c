/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:41:02 by kduru             #+#    #+#             */
/*   Updated: 2022/06/25 13:41:04 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	if (c == 0)
		return ((((char *)str)) + ft_strlen(str));
	if (c > 0)
	{
		while (str[i])
		{
			if (str[i] == c % 256)
				return ((((char *) str) + i));
			i++;
		}
	}
	return (NULL);
}
