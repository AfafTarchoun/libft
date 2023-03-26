/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:46:50 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/11 15:51:32 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(*dest) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	ft_strcpy((char *)dest, (char *)src);
	return (dest);
}
/*int	main()
{
	const char src[] = "work";
	printf("%s\n", strdup(src));
	printf("%s", ft_strdup(src));
	return 0;
}*/
