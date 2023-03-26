/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:06:44 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (!str1 && !str2)
		return (NULL);
	while (i < n)
	{
		((char *)str1)[i] = ((char *)str2)[i];
		i++;
	}
	return (str1);
}
/*int	main(void)
{
	char s1[] = "this";
	char s2[] = "try this";
	printf("%s\n", memcpy(s1, s2, 4));
	printf("%s", ft_memcpy(s1, s2, 4));
	return (0);
}*/
