/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:56:50 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_len(int nb)
{
	size_t	i;

	i = 1;
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 9)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

static int	ft_div(int len)
{
	int	i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		value[3];
	char	*str;

	value[0] = -1;
	value[1] = ft_len(n);
	value[2] = value[1];
	if (n == -2147483648)
		return ((ft_strdup("-2147483648")));
	str = (char *)malloc(sizeof(char) * (value[1] + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		value[0]++;
		value[1]--;
	}
	while (++value[0] < value[2])
	{
		str[value[0]] = ((n / ft_div(value[1]) % 10) + '0');
		value[1]--;
	}
	str[value[0]] = '\0';
	return (str);
}
