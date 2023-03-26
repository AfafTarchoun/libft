/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:29:32 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/11 15:26:06 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < len)
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	if (i == len)
		return (0);
	else
		return (str1[i] - str2[i]);
}
/*int	main()
{
	char s1[] = "hello";
	char s2[] = "hey";
	printf("%d\n",ft_memcmp(s1, s2, 5)); 
	printf("%d", memcmp(s1, s2, 5));
	return (0);
}*/
