/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 02:55:37 by kduru             #+#    #+#             */
/*   Updated: 2022/06/27 02:55:38 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*arr;
	unsigned int	i;
	unsigned int	len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	while (s[i])
	{
		arr[i] = (*f)(i, s[i]);
		i++;
	}
	arr[i] = 0;
	return (arr);
}
