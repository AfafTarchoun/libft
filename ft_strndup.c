/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <atarchou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 12:33:54 by atarchou          #+#    #+#             */
/*   Updated: 2022/05/05 12:50:18 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *s1, int n)
{
	char	*dest;

	dest = (char *)ft_calloc((n + 1), sizeof(char));
	if (!dest)
	{
		dest = NULL;
		return (dest);
	}
	ft_strncpy(dest, s1, n);
	return (dest);
}