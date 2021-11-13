/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:33:57 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/11 15:29:41 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)str)[i] == (char)c)
			return ((void *)(&((char *)str)[i]));
		i++;
	}
	return (NULL);
}
/*int	main()
{
	char str[] = "let's try this";
	int c = 't';
	printf("%s\n", ft_memchr(str, c, 5));
	printf("%s", memchr(str, c, 5));
	return 0;
}*/
