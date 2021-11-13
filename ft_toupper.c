/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:10:08 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/04 16:11:25 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c < 123)
		c = c - 32;
	return (c);
}
/*
int	main()
{
	int c = 'a';
	printf("%d",ft_toupper(c));
	return (0);
}*/