/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:28:01 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/12 13:29:56 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] != '\0')
	{
		i++;
	}
	while (str[i] != (unsigned char )c && i >= 0)
	{
		i--;
	}
	if (i < 0)
		return (NULL);
	else
		return ((char *)&(str[i]));
}
/*int	main()
{
	const char s[] ="believe";
	int c = 'e';
	printf("%s", ft_strrchr(s, c));	
}*/
