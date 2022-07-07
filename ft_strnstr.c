/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:08:20 by kduru             #+#    #+#             */
/*   Updated: 2022/06/25 15:08:22 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *big, const char *little, size_t index)
{
	size_t	i;

	i = 0;
	while (little[i])
	{
		if (big[index + i] != little[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (!little[i])
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0] && i - 1 + ft_strlen(little) < len)
		{
			if (check(big, little, i))
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
