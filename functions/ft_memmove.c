/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:07:17 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (!dst && !src)
		return (NULL);
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (dst > src)
	{
		while (len--)
			s1[len] = s2[len];
	}
	else
		ft_memcpy(s1, s2, len);
	return (dst);
}
/*int main()
{
    char src[] = "this is an example";
	printf("%s\n", ft_memmove(src + 7, src, 10));
	printf("%s\n", ft_memcpy(src + 7, src, 10));
    return (0);
}*/
