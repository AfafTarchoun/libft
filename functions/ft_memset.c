/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:02:04 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/11 15:23:55 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = (char)c;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str[50];
    printf("%s\n",ft_memset(str, 'u', 10));
	printf("%s", memset(str, 'u', 10));
}*/
