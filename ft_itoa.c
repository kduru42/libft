/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kduru <kduru@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 01:54:41 by kduru             #+#    #+#             */
/*   Updated: 2022/06/27 01:54:43 by kduru            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_pow(int n)
{
	int	power;

	power = 0;
	while (n)
	{
		power++;
		n /= 10;
	}
	return (power);
}

static char	*dec_alloc(int n, int power)
{
	char	*num;

	if (n < 0)
		num = (char *)malloc(sizeof(char) * (power + 2));
	else if (n == 0)
		num = (char *)malloc(sizeof(char) * 2);
	else
		num = (char *)malloc(sizeof(char) * (power + 1));
	return (num);
}

static int	my_pow(int n)
{
	int	power;

	power = 1;
	while (n > 1)
	{
		power *= 10;
		n--;
	}
	return (power);
}

static void	convert(char *num, int power, int n, int i)
{
	while (power)
	{
		*(num + i) = ((n / power) % 10) + 48;
		power /= 10;
		i++;
	}
	*(num + i) = 0;
}

char	*ft_itoa(int n)
{
	char	*num;
	int		power;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	power = find_pow(n);
	num = dec_alloc(n, power);
	if (!num)
		return (NULL);
	power = my_pow(power);
	if (n < 0)
	{
		num[i] = '-';
		i++;
		n *= -1;
	}
	convert(num, power, n, i);
	return (num);
}
