/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:35:44 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

static int	ft_long(unsigned long long a, int n)
{
	if (a >= 9223372036854775807)
	{
		if (n < 0)
			return (0);
	}
	return (-1);
}

int	ft_atoi(const char *str)
{
	unsigned long long		a;
	int						v[2];

	a = 0;
	v[0] = 0;
	v[1] = 1;
	while (str[v[0]] <= ' ' && str[v[0]] != 27 && str[v[0]] != '\200')
		v[0]++;
	if (str[v[0]] == '-')
	{
		v[1] = -1;
		v[0]++;
	}
	else if (str[v[0]] == '+')
		v[0]++;
	while (str[v[0]] != '\0')
	{
		if (ft_isdigit(str[v[0]]) == 0)
			break ;
		a = a * 10 + str[v[0]] - '0';
		v[0]++;
		if (a >= 9223372036854775807)
			return (ft_long(a, v[1]));
	}
	return ((int)v[1] * a);
}
/*int	main()
{
	const char str[] = "99999999999999999999999999999";
	printf("%d",ft_atoi(str));
	printf("%d", atoi(str));
	return(0);
}*/
