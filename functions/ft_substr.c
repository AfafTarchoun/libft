/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:47:41 by atarchou          #+#    #+#             */
/*   Updated: 2023/03/26 21:00:38 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../include/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		str = malloc(sizeof(char) * 1);
		str[0] = '\0';
		return (str);
	}
	if (len <= ft_strlen(s))
		str = malloc(sizeof(char) * (len + 1));
	if (len > ft_strlen(s))
	{
		str = malloc(sizeof(char) * (ft_strlen(s) + 1));
		len = ft_strlen(s);
	}
	if (!str)
		return (NULL);
	while (s[i] && len--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}
/*int	main()
{
	char const s[] = "please work" ;
	unsigned int start;
	size_t len;

	start = 5;
	len = 11;
	printf("%s", ft_substr(s, start, len));
	return 0;
}*/
