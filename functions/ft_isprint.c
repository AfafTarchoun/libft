/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:00:41 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

int	ft_isprint(int c)
{
	if (! (c >= 32 && c < 127))
		return (0);
	else
		return (1);
}
/*
int main(void)
{
	int c = '5';
	printf("%d", ft_isprint(c));
	return (0);
}*/
