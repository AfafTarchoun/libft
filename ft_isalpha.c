/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:50:29 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/11 14:31:05 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*#include <ctype.h>*/
int	ft_isalpha(int s)
{
	if (! ((s >= 97 && s < 123) || (s >= 65 && s < 91)))
		return (0);
	return (1);
}
/*int main(void)
{
	char c = 'o';
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", isalpha(c));
	return (0);
}*/
