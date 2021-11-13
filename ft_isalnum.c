/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atarchou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:58:40 by atarchou          #+#    #+#             */
/*   Updated: 2021/11/11 14:30:39 by atarchou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/*#include<ctype.h>*/
int	ft_isalnum(int s)
{
	if (!((s >= 48 && s < 58) || (s >= 65 && s < 91)
			|| (s >= 97 && s < 123)))
		return (0);
	return (1);
}
/*int main(void)
{
	int c = '5';
	printf("%d", ft_isalnum(c));
	printf("%d", isalnum(c));
	return (0);
}*/
