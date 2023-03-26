/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:42:42 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((s[i] != '\0') && (s[i] != (unsigned char )c))
	{
		i++;
	}
	if (s[i] == (unsigned char )c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
/*int	main()
{
	char str[] = "hello";
	int ch = 'e';
	printf("%s\n", ft_strchr(str, ch));
	printf("%s\n", strchr(str, ch));
	return (0);
}*/
