/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 22:40:22 by kduru             #+#    #+#             */
/*   Updated: 2022/06/29 16:37:34 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_c(char const *s, char c)
{
	int	val;
	int	i;

	val = 0;
	i = 0;
	if (!s[i])
		return (-1);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			val++;
			while (s[i + 1] == c)
				i++;
		}
		i++;
	}
	if (s[i - 1] == c)
		val--;
	return (val);
}

static int	if_c(char const *s, char c, int start)
{
	int	i;
	int	len;

	i = start;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**arr;
	int		num;
	int		len;

	if (!s)
		return (NULL);
	i = 0;
	num = 0;
	arr = (char **)malloc(sizeof(char *) * (find_c(s, c) + 2));
	if (!arr)
		return (NULL);
	while (s[i] && num < find_c(s, c) + 1)
	{
		while (s[i] == c)
			i++;
		len = if_c(s, c, i);
		arr[num] = (char *)malloc(sizeof(char) * (len) + 1);
		arr[num] = ft_substr(s, i, len);
		i += len + 1;
		num++;
	}
	arr[num] = NULL;
	return (arr);
}
