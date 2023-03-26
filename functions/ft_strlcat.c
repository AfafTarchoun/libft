/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:09:13 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	t1;
	size_t	t2;

	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	if (size < t1)
		return (t2 + size);
	while (t1 + i < size - 1)
	{
		if (src[i] == '\0')
			break ;
		dst[t1 + i] = src[i];
		i++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}

/*int	main()
{
	char dst[] = "th";
	char src[] = "is";
	printf("%lu\n", ft_strlcat(dst, src, 0));
	printf("%lu\n",strlcat(dst, src, 0));
	return (0);
}*/
